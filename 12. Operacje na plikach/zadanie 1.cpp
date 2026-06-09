#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream plikZapis("dane.txt");
    if (!plikZapis) {
        cout << "Blad otwarcia pliku do zapisu!" << endl;
        return 1;
    }

    plikZapis << "Jan Kowalski 25" << endl;
    plikZapis << "Anna Nowak 30" << endl;
    plikZapis << "Piotr Zielinski 28" << endl;
    plikZapis.close();

    ifstream plikOdczyt("dane.txt");
    if (!plikOdczyt) {
        cout << "Blad otwarcia pliku do odczytu!" << endl;
        return 1;
    }

    string imie;
    string nazwisko;
    int wiek;

    while (plikOdczyt >> imie >> nazwisko >> wiek) {
        cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << ", Wiek: " << wiek << endl;
    }

    plikOdczyt.close();
    return 0;
}
