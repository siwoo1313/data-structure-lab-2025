#include "Q3header.h"


int main() {
    Polynomial polyA, polyB, polyC;

    std::cout << "Poly A �Է�\n";
    polyA.input();
    polyA.display("Poly A");

    std::cout << "\nPoly B �Է�\n";
    polyB.input();
    polyB.display("Poly B");

    polyC = polyA.add(polyB);
    std::cout << "\n���� ���\n";
    polyC.display("Poly C");

    return 0;
}