#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction{
    int a,b;
public:
    Fraction operator+(const Fraction&);
    Fraction operator-(const Fraction&);
    Fraction operator*(const Fraction&);
    Fraction operator/(const Fraction&);
    Fraction operator+(int);
    Fraction operator-(int);
    Fraction operator*(int);
    Fraction operator/(int);
    Fraction(int a, int b);
    Fraction show() { std::cout << a << '/' << b << endl;  }
};

#endif // FRACTION_H
