#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;

void LosujTablice(int *tablica, int rozmiar, int poczatek, int koniec) {
    for (int i = 0; i < rozmiar; i++) {
        tablica[i] = poczatek + rand() % (koniec - poczatek + 1);
    }
}

bool SprawdzLiczbe(const int *liczba, const int *tablica, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        if (*liczba == tablica[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    int rozmiar;
    int poczatek;
    int koniec;

    cout << "Ile liczb chcesz wylosowac: ";
    cin >> rozmiar;
    cout << "Wartosc poczatkowa: ";
    cin >> poczatek;
    cout << "Wartosc koncowa: ";
    cin >> koniec;

    if (rozmiar <= 0) {
        cout << "Niepoprawny rozmiar tablicy." << endl;
        return 1;
    }

    if (poczatek > koniec) {
        int pomocnicza = poczatek;
        poczatek = koniec;
        koniec = pomocnicza;
    }

    int *tablica = new int[rozmiar];
    LosujTablice(tablica, rozmiar, poczatek, koniec);

    cout << "Tablica: ";
    for (int i = 0; i < rozmiar; i++) {
        cout << tablica[i];
        if (i < rozmiar - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    int liczba;
    int proby = 0;

    while (true) {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        proby++;

        if (SprawdzLiczbe(&liczba, tablica, rozmiar)) {
            cout << "Zgadles!" << endl;
            cout << "Zgadles za " << proby << " razem." << endl;
            break;
        } else {
            cout << "Nie zgadles" << endl;
        }
    }

    delete[] tablica;
    return 0;
}
