#include "complexnumber.h"

//// FUNKCJE ////
void greeting(void) // powitanie
{
    cout << "**************************************************" << endl;
    cout << "***********Kalkulator liczb zespolonych***********" << endl;
}
void tabCount(int counter) // informacja o liczbie elementow tablicy
{
    cout << "**************************************************" << endl;
    cout << "*********W tablicy znajduje się " << counter << " liczb.*********" << endl;;
}
void choose(void) // informacja o mozliwych czynnosciach
{
    cout << "**************************************************" << endl;
    cout << "*****************Co chcesz zrobic?****************" << endl;
    cout << "**************************************************" << endl;
    cout << "  n - podanie nowej liczby" << endl;
    cout << "  w - wyswietlenie zapisanych liczb" << endl;
    cout << "  + - dodanie dwoch liczb" << endl;
    cout << "  - - odejmowanie dwoch liczb" << endl;
    cout << "  * - mnozenie dwoch" << endl;
    cout << "  k - wyjscie z programu" << endl;
    cout << "  " << endl;
}

//// FUNKCJA GLOWNA ////
int main()
{
greeting();

complexNumber* tab[100];  // utowrzenie tablicy wskaznikow do liczb zespolonych
complexNumber num1 (3,4); // utowrzenie dwóch elementow starowych
tab[0] = &num1;
complexNumber num2 (5,15);
tab[1] = &num2;

char sign = '0';  // strażnik pętli
int counter = 2;  // licznik elementów

while (sign != 'k')  // pętla progamu
{
    tabCount(counter);
    choose();
    cin >> sign;

    switch (sign)
    {
    case 'n' : // nowa liczba
        {
        tab[counter] = new complexNumber;
        tab[counter] -> set();
        counter++;
        }
        break;

    case 'w' : // wypisanie zapamietanych liczb
        {
            for (int temp = 0; temp < counter ; temp++)
            {
            cout << "Liczba numer " << temp << " : " << endl;
            tab[temp] -> read();
            }
        }
        break;

    case '+' : // dodanie dwoch liczb
        {
            int ind1, ind2;
            tab[counter] = new complexNumber;

            cout << "Podaj indeksy liczb do dodania: " << endl;
            cout << "Pierwszy: " << endl;
            cin >> ind1;
            cout << "Drugi: " << endl;
            cin >> ind2;

            *tab[counter] = *tab[ind1] + *tab[ind2];
            cout << "Wynik dodawania: " << endl;
            tab[counter] -> read();
            cout << "Liczba zostala dopisana do tablicy." << endl;
            counter++;
        }
        break;

    case '-' : // odjecie dwoch liczb
        {
            int ind1, ind2;
            tab[counter] = new complexNumber;

            cout << "Podaj indeksy liczb do odjecia: " << endl;
            cout << "Pierwszy: " << endl;
            cin >> ind1;
            cout << "Drugi: " << endl;
            cin >> ind2;

            *tab[counter] = *tab[ind1] - *tab[ind2];
            cout << "Wynik odejmowania: " << endl;
            tab[counter] -> read();
            cout << "Liczba zostala dopisana do tablicy." << endl;
            counter++;
        }
        break;

    case '*' : // pomnozenie dwoch liczb
        {
            int ind1, ind2;
            tab[counter] = new complexNumber;

            cout << "Podaj indeksy liczb do mnozenia: " << endl;
            cout << "Pierwszy: " << endl;
            cin >> ind1;
            cout << "Drugi: " << endl;
            cin >> ind2;

            *tab[counter] = (*tab[ind1]) * (*tab[ind2]);
            cout << "Wynik mnozenia: " << endl;
            tab[counter] -> read();
            cout << "Liczba zostala dopisana do tablicy." << endl;
            counter++;
        }
        break;

    default:
        {
        cout << "Zle polecenie" << endl;
        }
    }
}
return 0;
}

