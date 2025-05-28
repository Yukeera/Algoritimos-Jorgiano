#include <iostream>

int main(){
    int n, cont;
    std::cin >> n;
    int valores[n], valoresAbaixo[n];
    float soma = 0;
    for (int i = 0; i < n; i++){
        std::cin >> valores[n];
        soma += valores[n];
    }

    for (int i = 0; i < n; i++){
        if(valores[i] < soma / n){
            valoresAbaixo[i]
        }
    }

    std::cout << soma / n;

}