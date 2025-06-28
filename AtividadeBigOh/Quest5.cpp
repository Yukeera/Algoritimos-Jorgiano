#include <iostream>
//9
//7 17 9 1 21 5 11 3 15
//12

bool checkSomaValorAlvo( int a[], int n, int s){
    bool res = false; //2
    int cont = 0; //2
    for(int j = 0 ; j < n; j++){ //2, 1n, 2n
        for (int k = j+1; k < n; k++){ //3(n), 1n(n), 2n(n)
            if (a[j] + a[k] == s){ //4n(n)
                std::cout << "Indice " << j << " + " << k << " = " << s << std::endl;
                res = true; //1n(n)
                cont += 1; //2n(n)
            }
        }
    }
    std::cout << cont << " Ocorrencias" << std::endl;
    return res; //1
}

int main(){
    int n; //Tamanho da array
    std::cin >> n;
    int a[n]; //criar array
    int s; 
     
    for(int i = 0; i < n; i++){ //Atribui valores aos N elementos do Array
        std::cin >> a[i];
    }

    std::cin >> s; //Número alvo da soma de um par de números da Array

    if(checkSomaValorAlvo(a, n, s)){
        std::cout << "S" << std::endl;
    }
    else{
        std::cout << "N" << std::endl;
    }
    return 0;
}