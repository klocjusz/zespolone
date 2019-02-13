#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include <iostream>
#include <cmath>
using namespace std;

class complexNumber
{
private:
    int re;
    int im;
public:
    // OPERATORY
    friend complexNumber operator + (const complexNumber &a, const complexNumber &b);
    friend complexNumber operator - (const complexNumber &a, const complexNumber &b);
    friend complexNumber operator * (const complexNumber &a, const complexNumber &b);

    // METODY
    void read(); // odczytanie liczby
    void set(); // ustalenie wartosci liczby

    // KONSTRUKTORY
    complexNumber();
    complexNumber(int);
    complexNumber(int, int);
    complexNumber(const complexNumber & num);
};

#endif // COMPLEXNUMBER_H

