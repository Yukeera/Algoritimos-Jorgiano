#include <iostream>

int main(){
    long long l1, l2;
    std::cin >> l1 >> l2;
    if (l1 <= 0 || l2 <= 0){
        return 1;
    }
    std::cout << (l1 + l2) * 2 << std::endl;
    return 0;
}