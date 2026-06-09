#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <limits>
using namespace std;

bool PlikIstnieje(const string &nazwaPliku) {
    ifstream plik(nazwaPliku.c_str());
    return plik.good();
}

int main() {
    int wybor;
    cout << "Wybierz operacje:" << endl;
    cout << "1 - Utworz nowy plik" << endl;
    cout << "2 - Usun plik" << endl;
    cout << "3 - Zmien nazwe pliku" << endl;
    cout << "Twoj wybor: ";
    cin >> wybor;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (wybor == 1) {
        string nazwaPliku;
        cout << "Podaj nazwe nowego pliku: ";
        getline(cin, nazwaPliku);

        ofstream plik(nazwaPliku.c_str());
        if (!plik) {
            cout << "Blad podczas tworzenia pliku!" << endl;
            return 1;
        }

        plik.close();
        cout << "Plik '" << nazwaPliku << "' zostal utworzony." << endl;
    } else if (wybor == 2) {
        string nazwaPliku;
        cout << "Podaj nazwe pliku do usuniecia: ";
        getline(cin, nazwaPliku);

        if (!PlikIstnieje(nazwaPliku)) {
            cout << "Plik nie istnieje!" << endl;
            return 1;
        }

        if (remove(nazwaPliku.c_str()) == 0) {
            cout << "Plik '" << nazwaPliku << "' zostal usuniety." << endl;
        } else {
            cout << "Blad podczas usuwania pliku!" << endl;
            return 1;
        }
    } else if (wybor == 3) {
        string staraNazwa;
        string nowaNazwa;

        cout << "Podaj nazwe pliku do zmiany: ";
        getline(cin, staraNazwa);
        cout << "Podaj nowa nazwe pliku: ";
        getline(cin, nowaNazwa);

        if (!PlikIstnieje(staraNazwa)) {
            cout << "Plik nie istnieje!" << endl;
            return 1;
        }

        if (rename(staraNazwa.c_str(), nowaNazwa.c_str()) == 0) {
            cout << "Plik zostal pomyslnie zmieniony na '" << nowaNazwa << "'." << endl;
        } else {
            cout << "Blad podczas zmiany nazwy pliku!" << endl;
            return 1;
        }
    } else {
        cout << "Niepoprawny wybor." << endl;
        return 1;
    }

    return 0;
}
