#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
    int wiek;
};

void ZapiszOsoby(const string &nazwaPliku, const Osoba *osoby, int rozmiar, bool dopisz) {
    ofstream plik;
    if (dopisz) {
        plik.open(nazwaPliku.c_str(), ios::app);
    } else {
        plik.open(nazwaPliku.c_str());
    }

    if (!plik) {
        cout << "Blad otwarcia pliku!" << endl;
        return;
    }

    for (int i = 0; i < rozmiar; i++) {
        plik << osoby[i].imie << " " << osoby[i].nazwisko << " " << osoby[i].wiek << endl;
    }

    plik.close();
}

void WyswietlZawartosc(const string &nazwaPliku) {
    ifstream plik(nazwaPliku.c_str());
    if (!plik) {
        cout << "Blad otwarcia pliku do odczytu!" << endl;
        return;
    }

    Osoba osoba;
    cout << "\nDane w pliku po dopisaniu:" << endl;
    while (plik >> osoba.imie >> osoba.nazwisko >> osoba.wiek) {
        cout << "Imie: " << osoba.imie << ", Nazwisko: " << osoba.nazwisko << ", Wiek: " << osoba.wiek << endl;
    }

    plik.close();
}

int main() {
    const string nazwaPliku = "dane.txt";
    ifstream sprawdzenie(nazwaPliku.c_str());

    if (!sprawdzenie) {
        cout << "Plik dane.txt nie istnieje. Tworzenie pliku i zapis przykładowych danych..." << endl;
        Osoba przykladoweDane[] = {
            {"Jan", "Kowalski", 25},
            {"Anna", "Nowak", 30}
        };
        ZapiszOsoby(nazwaPliku, przykladoweDane, 2, false);
    }
    sprawdzenie.close();

    char odpowiedz;
    cout << "Czy chcesz dodac nowa osobe? (t/n): ";
    cin >> odpowiedz;

    if (odpowiedz == 't' || odpowiedz == 'T') {
        Osoba nowaOsoba;
        cout << "Podaj imie: ";
        cin >> nowaOsoba.imie;
        cout << "Podaj nazwisko: ";
        cin >> nowaOsoba.nazwisko;
        cout << "Podaj wiek: ";
        cin >> nowaOsoba.wiek;

        ZapiszOsoby(nazwaPliku, &nowaOsoba, 1, true);
    }

    WyswietlZawartosc(nazwaPliku);
    return 0;
}
