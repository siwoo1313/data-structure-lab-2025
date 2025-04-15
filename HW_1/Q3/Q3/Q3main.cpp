#include "Q3header.h"


int main() {
    Polynomial polyA, polyB, polyC;

    std::cout << "Poly A ÀÔ·Â\n";
    polyA.input();
    polyA.display("Poly A");

    std::cout << "\nPoly B ÀÔ·Â\n";
    polyB.input();
    polyB.display("Poly B");

    polyC = polyA.add(polyB);
    std::cout << "\nµ¡¼À °á°ú\n";
    polyC.display("Poly C");

    return 0;
}