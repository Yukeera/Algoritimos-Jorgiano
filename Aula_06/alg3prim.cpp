#include <iostream>
#include <chrono>
using namespace std;

bool verificarprimalidade(int n){
    if (n == 2){
        return true;
    }
    else if (n == 1 || n % 2 == 0){
        return false;
    }

    int divs = 1;

    for (int i = 3 ; i <= (n / 2); i += 2){
        if (n % i == 0){
            divs += 1;
            cout << divs << endl;
        }
        cout << "for " << i << endl; 
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
    cin >> n;
    cout << verificarprimalidade(n) << endl;

}