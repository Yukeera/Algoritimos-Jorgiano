#include <iostream>

int main(){
    double notaMax, notaAluno;
    std::cin >> notaMax >> notaAluno;
    if ((notaMax < 1 || notaMax > 100000) || (notaAluno > notaMax || notaAluno < 0)){
        std::cout << "Input value error!" << std::endl;
        return 1;
    }
    std::cout << (notaAluno / notaMax) * 100 << std::endl;
    return 0;
}