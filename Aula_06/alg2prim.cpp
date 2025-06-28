#include <iostream>
#include <chrono>
using namespace std;

bool verificarprimalidade(int n){
    int divs = 1;
    for (int i = 1 ; i <= (n / 2); i++){
        if (n % i == 0){
            divs += 1;
            
        }
        
    }
    if (divs <= 2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;

    while (true)
    {
       cin >> n;
       
    }
    
    

    auto beg = std::chrono::high_resolution_clock::now();
    bool p = verificarprimalidade(n);
    // Fim do cronômetro
    auto end = std::chrono::high_resolution_clock::now();

    if (p) std::cout << n << " is prime" << std::endl;
    else std::cout << n << " is not prime" << std::endl;

    auto dur = end - beg; // Duração do cronômetro
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(dur);
    std::cerr << n << " Processing time: "

    << duration.count() << " milliseconds(s)"<< std::endl;

}