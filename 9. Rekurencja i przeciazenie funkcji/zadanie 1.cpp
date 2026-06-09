#include <iostream>
using namespace std;

double CalculateVolume(double a) { // cube
    return a * a * a;
}

double CalculateVolume(double a, double b, double c) { // rectangular prism
    return a * b * c;
}

double CalculateVolume(double r, double h) { // cylinder
    const double PI = 3.1415;
    return PI * r * r * h;
}

void DisplayResult(double v) {
    cout << "Objetosc: " << v << endl;
}

int main() {
    cout << "Wybierz bryle do obliczenia objetosci:\n";
    cout << "1 - Szescian (V = a^3)\n";
    cout << "2 - Prostopadloscian (V = a * b * h)\n";
    cout << "3 - Walec (V = pi * r^2 * h)\n";
    cout << "Wybierz numer bryly: ";
    int opcja;
    cin >> opcja;
    if (opcja == 1) {
        cout << "Podaj dlugosc: ";
        double a; cin >> a;
        DisplayResult(CalculateVolume(a));
    } else if (opcja == 2) {
        cout << "Podaj dlugosc: "; double a; cin >> a;
        cout << "Podaj szerokosc: "; double b; cin >> b;
        cout << "Podaj wysokosc: "; double c; cin >> c;
        DisplayResult(CalculateVolume(a,b,c));
    } else if (opcja == 3) {
        cout << "Podaj promien: "; double r; cin >> r;
        cout << "Podaj wysokosc: "; double h; cin >> h;
        DisplayResult(CalculateVolume(r,h));
    } else {
        cout << "Nieznana opcja" << endl;
    }
    return 0;
}

