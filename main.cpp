#include <iostream>
#include "fraction.h"

using namespace std;

int main(){
    Fraction a(10,3);
    Fraction b(13,5);
    (a+b).show();
    (a-b).show();
    (a*b).show();
    (a/b).show();
    (a+3).show();
    (a-1).show();
    (a*4).show();
    (a/5).show();
}
