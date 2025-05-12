#include <iostream>
#include <chrono>
using namespace std;

int maiorDif(int a[], int n){
    int maior = 0;
    for(int i = 0; i < n - 1; i++){
        if (a[i] + a[i+1] > maior){
            maior = a[i] + a[i+1];
        }
    }
    return maior;
}

int main(){
    int n;
    cin >> n; //1
    int a[n]; //1n
    for (int i = 0; i < n; i++){ //2n
        int t; 
        cin >> t; //1(n - 1)
        a[i] = t; //2(n - 1)
    }   //2(n - 1)


    

    auto beg = std::chrono::high_resolution_clock::now();
    cout << maiorDif(a, n) << endl;
    // Fim do cronômetro
    auto end = std::chrono::high_resolution_clock::now();


    auto dur = end - beg; // Duração do cronômetro
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(dur);
    std::cerr << n << " Processing time: "

    << duration.count() << " milliseconds(s)"<< std::endl;

}