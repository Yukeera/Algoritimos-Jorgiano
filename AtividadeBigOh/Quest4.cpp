#include <iostream>
#include <chrono>
using namespace std;

int sublistaCrescente(int a[], int n){
    int maior = 1;  //2
    int temp = 1;   //2
    for(int i = 0; i < n - 1; i = i + 1){     //2, 2n, 2 ( n - 1 )
        if (a[i] <= a[i+1]){    //4(n-1)
            temp += 1;  //2(n-1)
            if (temp > maior){  //1(n-1)
                maior += 1; //2 (n-1)
            }
        }
        else{
            temp = 1;   //1 (n-1)
        }
        
    } 
    return maior;   //1
}

int main(){
    int n;
    cin >> n; 
    int a[n]; 
    for (int i = 0; i < n; i++){ 
        int t; 
        cin >> t; 
        a[i] = t; 
    }   


    

    auto beg = std::chrono::high_resolution_clock::now();
    cout << sublistaCrescente(a, n) << endl;
    // Fim do cronômetro
    auto end = std::chrono::high_resolution_clock::now();


    auto dur = end - beg; // Duração do cronômetro
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(dur);
    std::cerr << n << " Processing time: "

    << duration.count() << " milliseconds(s)"<< std::endl;

}