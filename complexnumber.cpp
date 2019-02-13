#include "complexnumber.h"

//// OPERATORY ////
// operator dodawania
complexNumber operator + (const complexNumber &a, const complexNumber &b)
{
    complexNumber temp;
    temp.re = a.re + b.re;
    temp.im = a.im + b.im;
    return temp;
}

// operator odejmowania
complexNumber operator - (const complexNumber &a, const complexNumber &b)
{
    complexNumber temp;
    temp.re = a.re - b.re;
    temp.im = a.im - b.im;
    return temp;
}

// operator mnozenia
complexNumber operator * (const complexNumber &a, const complexNumber &b)
{
    complexNumber temp;
    temp.re = (a.re * b.re) - (a.im * b.im);
    temp.im = (a.re * b.im) + (a.im * b.re);
    return temp;
}

//// METODY ////
// odczytanie liczby
void complexNumber::read()
{
    if (im < 0)
    { cout << re << " - " << abs(im) << "i" << endl; }
     else
    { cout << re << " + " << im << "i" << endl; }
}

// ustalenie wartosci liczby
void complexNumber::set()
{
    cout << "Podaj czesc rzeczywista: ";
    cin >> re;
    cout << "Podaj czesc urojona: ";
    cin >> im;
}

//// KONSTRUKTORY ////
// konstruktor bezargumentowy
complexNumber::complexNumber()
{
re = 0;
im = 0;
}

// konstruktor jednoargumentowy
complexNumber::complexNumber(int a)
{
re = a;
im = a;
}

// konstruktor dwuargumentowy
complexNumber::complexNumber(int a, int b)
{
re = a;
im = b;
}

// konstruktor kopiujacy
complexNumber::complexNumber(const complexNumber & num)
{
re = num.re;
im = num.im;
}
