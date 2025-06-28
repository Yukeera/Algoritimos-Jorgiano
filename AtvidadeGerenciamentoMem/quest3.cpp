#include <iostream>

int index(int alvo, int a[], int n){
    for (int i = 0 ; i < n ; i++){
        if (a[i] == alvo){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    std::cout << "Qual tamanho da lista!" << std::endl;
    std::cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n ; i++){
        std::cin >> a[i];
    }
    int alvo;
    std::cout << "Qual valor quer encontrar?" << std::endl;
    std::cin >> alvo;

    std::cout << index(alvo, a, n) << std::endl;
    delete[] a;
}