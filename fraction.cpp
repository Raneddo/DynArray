#include "fraction.h"

Fraction::Fraction(int a, int b){
    this->a = a;
    this->b = b;
}

Fraction::operator+(const Fraction &b){
    return Fraction(this->a*b.b + this->b * b.a,this->b*b.b);
}

Fraction::operator-(const Fraction &b){
    return Fraction(this->a*b.b + this->b * b.a,this->b*b.b);
}

Fraction::operator *(const Fraction &b){
    return Fraction(this->a*b.a,this->b,b.b);
}

Fraction::operator /(const Fraction &b){
    return Fraction(this->a*b.b,this->b,b.a);
}

Fraction::operator +(int b){
    return this->operator+(Fraction(b,1));
}

Fraction::operator *(int b){
    return this->operator*(Fraction(b,1));
}

Fraction::operator /(int b){
    return this->operator/(Fraction(b,1));
}

Fraction::operator -(int b){
    return this->operator-(Fraction(b,1));
}
