#include <iostream>
using namespace std;

int ObliczSume(const int *tablica, int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; i++) {
        suma += *(tablica + i);
    }
    return suma;
}

int main() {
    int tablica[] = {10, 15, 5, 20};
    const int ROZMIAR = sizeof(tablica) / sizeof(tablica[0]);

    cout << "Suma elementow tablicy: " << ObliczSume(tablica, ROZMIAR) << endl;

    for (int i = 0; i < ROZMIAR; i++) {
        cout << "Podaj nowa wartosc dla elementu " << i << ": ";
        cin >> *(tablica + i);
    }

    cout << "Nowa tablica:" << endl;
    for (int i = 0; i < ROZMIAR; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
    cout << "Nowa suma elementow tablicy: " << ObliczSume(tablica, ROZMIAR) << endl;

    return 0;
}
