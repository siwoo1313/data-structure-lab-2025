#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>
#include <vector>

struct Term {
    int coeff;
    int expo;

    Term(int c, int e) : coeff(c), expo(e) {}
};

class Polynomial {
private:
    std::vector<Term> terms;

public:
    void input();
    void display(const std::string& name) const;
    Polynomial add(const Polynomial& other) const;
};

#endif