#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void LosujTablice(int *tablica, int rozmiar) {
    for (int i = 0; i < rozmiar; i++) {
        tablica[i] = rand() % 51;
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

    const int ROZMIAR = 10;
    int tablica[ROZMIAR];
    LosujTablice(tablica, ROZMIAR);

    cout << "Tablica: ";
    for (int i = 0; i < ROZMIAR; i++) {
        cout << tablica[i];
        if (i < ROZMIAR - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    int liczba;
    int proby = 0;

    do {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        proby++;

        if (SprawdzLiczbe(&liczba, tablica, ROZMIAR)) {
            cout << "Zgadles!" << endl;
            cout << "Zgadles za " << proby << " razem." << endl;
            break;
        } else {
            cout << "Nie zgadles" << endl;
        }
    } while (true);

    return 0;
}
