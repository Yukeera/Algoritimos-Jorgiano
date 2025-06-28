#include <iostream>
//3 1 2 4
void remove(int alvo,  int* &a, int &n){
    int* new_array = new int[n-1];
    bool removed = false;
    for (int i = 0; i < n ; i++){
        if (alvo == a[i] && removed == false){
            removed = true;
            continue;
        }

        if(removed == true){
            new_array[i-1] = a[i];
            continue;
        }

        new_array[i] = a[i];
    }

    if(removed == true){
        int* old_array = a;
        delete[] old_array;
        a = new_array;
        n = n - 1;
    }

    else{
        delete[] new_array;
        std::cerr << "Esse valor não esta presente na lista!";
    }
}

int main(){
    int n;
    int alvo;
    std::cout << "Digite o Tamanho da lista";
    std::cin >> n;
    int* a = new int[n];
    for (int i = 0 ; i < n ; i++){
        std::cin >> a[i];
    }
    std::cout << "Qual valor deseja remover?";
    std::cin >> alvo;
    for(int i = 0 ; i < n; i++){
        std::cout << a[i] << " ";
    }
    remove(alvo, a, n);
    std::cout << std::endl;
    for (int i = 0 ; i < n; i++){
        std::cout << a[i] << " ";
    }

    delete[] a;
}