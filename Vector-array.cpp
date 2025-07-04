#ifndef __VECTOR_ARRAY_IFRN__
#define __VECTOR_ARRAY_IFRN__
class vector_array {
private:
    int *data;
    unsigned int size_, capacity_;
    void increase_capacity() {
        int *new_array = new int [capacity_ + 8];
        for (int i = 0; i < this->size() ; i++){
            new_array[i] = this->data[i];
        }
        delete [] this->data;
        this->data = new_array;
        this->capacity_ += 8;
    }

public:
    vector_array() {         // Construtor  
        capacity_ = 8;
        size_ = 0;
        data = new int [capacity_];
    }
    ~vector_array() { // Destrutor
    }
    unsigned int size() { // Retorna a quantidade de elementos armazenados
        return size_;
    }
    unsigned int capacity() { // Retorna o espaço reservado para armazenar os elementos
        return capacity_;
    }
    double percent_occupied() { // Retorna um valor entre 0.0 a 1.0 com o percentual da
        return 0;               // memória usada.
    }
    bool insert_at(unsigned int index, int value) { // Insere elemento no índice index
        if (this->size() == this->capacity()){
            this->increase_capacity();
        }
        if(index < this->size() && index >= 0){
            for (int i = this->size(); i > (int)index; i--) {
                this->data[i] = this->data[i-1];
            }
            this->data[index] = value;
            this->size_++;
            return true;
        }
        return false;
    }
    bool remove_at(unsigned int index) { // Remove elemento do índice index
        if (index < this->size() && index >= 0){
            for (int i = index; i < this->size() - 1; i++){
                this->data[i] = this->data[i+1];
            }
            this->size_--;
            return true;
        }
        return false;
    }
    bool is_empty() { // Retorna true se o vetor não contém elementos
        return this->size() == 0;
    }
    int get_at(unsigned int index) { // Retorna elemento no índice index,
        if (index < this->size()){
            return this->data[index];
        }
        else{
            return -1;               // −1 se índice inválido
        }
    }

    void clear() { // Remove todos os elementos, deixando o vetor no estado inicial
        delete [] this->data;
        this->data = new int [this->capacity_];
        this->size_ = 0;
    }

    void push_back(int value) { // Adiciona um elemento no ``final'' do vetor
        if (this->size() == this->capacity()){
            this->increase_capacity();
        }
        this->data[this->size()] = value;
        this->size_ += 1;
    }
    void push_front(int value) { // Adiciona um elemento no ``início'' do vetor
        if (this->size() == this->capacity()){
            this->increase_capacity();
        }

        for (int i = this->size(); i > 0; i--){
            this->data[i] = this->data[i-1];
        }

        this->data[0] = value;
        this->size_ += 1;
    }
    bool pop_back() {            // Remove um elemento do ``final'' do vetor
        if (this->size() == 0){
            return false;    
        }
        this->size_--;
        return true;
    }
    bool pop_front() {           // Remove um elemento do ``início'' do vetor
        if (this->size() == 0){
            return false;
        }
        for (int i = 0; i < this->size() - 1; i++){
            this->data[i] = this->data[i+1];
        }
        this->size_--;
        return true;
    }
    int back() {                 // Retorna o elemento do ``final'' do vetor
        if (this->size() == 0){
            return -1;
        }
        return this->data[this->size() - 1];

    }
    int front() {                // Retorna o elemento do ``início'' do vetor
        if (this->size() == 0){
            return -1;
        }
        return this->data[0];
    }
    bool remove(int value) {     // Remove value do vetor caso esteja presente
        return false;            // Deve retornar true se value foi removido
    }
    int find(int value) {        // Retorna o índice de value, −1 caso value não esteja presente
        return -1;
    }
    int count(int value) {       // Retorna quantas vezes value occorre no vetor
        return 0;                // Retorna 0 se value não estiver presente
    }
    int sum() {                  // Retorna a soma dos elementos do vetor
        return 0;                // Retorna 0 se o vetor estiver vazio
    }
};
#endif // __VECTOR_LIST_IFRN__