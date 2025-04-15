#include "Q3header.h"
#include <algorithm>

void Polynomial::input() {
    int n;
    std::cout << "항의 개수를 입력하세요: ";
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        int c, e;
        std::cout << i + 1 << "번째 항의 계수와 차수를 입력하세요 (예: 계수 차수): ";
        std::cin >> c >> e;
        if (c != 0) {
            terms.emplace_back(c, e);
        }
    }

    // 내림차순 정렬
    std::sort(terms.begin(), terms.end(), [](const Term& a, const Term& b) {
        return a.expo > b.expo;
        });
}

void Polynomial::display(const std::string& name) const {
    std::cout << name << ": ";
    for (size_t i = 0; i < terms.size(); ++i) {
        const Term& t = terms[i];
        std::cout << t.coeff << "x^" << t.expo;
        if (i != terms.size() - 1) std::cout << " + ";
    }
    std::cout << std::endl;
}

Polynomial Polynomial::add(const Polynomial& other) const {
    Polynomial result;
    size_t i = 0, j = 0;

    while (i < terms.size() && j < other.terms.size()) {
        if (terms[i].expo == other.terms[j].expo) {
            int sum = terms[i].coeff + other.terms[j].coeff;
            if (sum != 0) {
                result.terms.emplace_back(sum, terms[i].expo);
            }
            ++i; ++j;
        }
        else if (terms[i].expo > other.terms[j].expo) {
            result.terms.push_back(terms[i++]);
        }
        else {
            result.terms.push_back(other.terms[j++]);
        }
    }

    while (i < terms.size()) result.terms.push_back(terms[i++]);
    while (j < other.terms.size()) result.terms.push_back(other.terms[j++]);

    return result;
}