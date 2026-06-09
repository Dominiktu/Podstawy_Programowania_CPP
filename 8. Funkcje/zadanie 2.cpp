#include <iostream>
using namespace std;

double dodaj(double a, double b) { return a + b; }
double roznica(double a, double b) { return a - b; }
double iloczyn(double a, double b) { return a * b; }
double iloraz(double a, double b) { return a / b; }

int main() {
    int wybor;
    double x, y;
    do {
        cout << "Wybierz funkcje:\n1. Suma\n2. Roznica\n3. Iloczyn\n4. Iloraz\n0. Wyjscie\n";
        cin >> wybor;
        if (wybor == 0) break;
        cout << "Podaj pierwsza liczbe: "; cin >> x;
        cout << "Podaj druga liczbe: "; cin >> y;
        switch (wybor) {
            case 1: cout << "Wynik: " << dodaj(x,y) << endl; break;
            case 2: cout << "Wynik: " << roznica(x,y) << endl; break;
            case 3: cout << "Wynik: " << iloczyn(x,y) << endl; break;
            case 4: cout << "Wynik: " << iloraz(x,y) << endl; break;
            default: cout << "Nieznana opcja" << endl;
        }
    } while (true);
    cout << "Koniec programu." << endl;
    return 0;
}
