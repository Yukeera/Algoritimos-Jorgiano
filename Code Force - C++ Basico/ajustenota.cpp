#include <iostream>

int main(){
    double notaMax, notaAluno;
    std::cin >> notaMax >> notaAluno;
    int res = (int)((notaAluno / notaMax) * 100);
    std::cout << res << std::endl;
    return 0;
}