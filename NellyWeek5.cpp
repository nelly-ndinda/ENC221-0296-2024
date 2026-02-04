#include <iostream>
using namespace std;

struct Fraction {
    int num;
    int den;
};

// Function returns reference to largest fraction
Fraction& findLargest(Fraction &a, Fraction &b, Fraction &c) {
    double valA = (double)a.num / a.den;
    double valB = (double)b.num / b.den;
    double valC = (double)c.num / c.den;

    if (valA > valB && valA > valC) return a;
    else if (valB > valA && valB > valC) return b;
    else return c;
}

int main() {
    Fraction fA = {2, 5};   // 0.4
    Fraction fB = {7, 9};   // ~0.78
    Fraction fC = {3, 4};   // 0.75

    Fraction &largest = findLargest(fA, fB, fC);
    cout << "Largest fraction is: " << largest.num << "/" << largest.den << endl;

    return 0;
}
