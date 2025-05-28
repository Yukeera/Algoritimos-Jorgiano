#include <iostream>

int main(){
    int b;
    int cont = 0;
    std::cin >> b;
    int batimentos[b];
    int somatotal = 0;
    
    for (int i = 0; i < b; i++){
        std::cin >> batimentos[i];
        somatotal += batimentos[i];
    }

    for (int i = 0; i < b; i++){
        if(batimentos[i] > (int)((somatotal / b) + (somatotal / b) * 0.1) || batimentos[i] < (int)((somatotal / b) - (somatotal / b) * 0.1)){
            cont += 1;
        }
    }
    
    std::cout << somatotal / b << std::endl << cont << std::endl;
}