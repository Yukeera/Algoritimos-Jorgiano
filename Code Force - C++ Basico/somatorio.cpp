#include <iostream>
#include <iomanip>
int main(){
    long long n;
    double cont = 0;
    std::cin >> n;
    
    for (int i = 1.0; i <= n; i++){
        cont += 1.0 / i;
        
    }

    std::cout << std::fixed << std::setprecision(4) << cont << std::endl;

}