#include <iostream>
using namespace std;

void FindMinMax(float *tablica, int rozmiar, float *maksimum, float *minimum) {
    *maksimum = tablica[0];
    *minimum = tablica[0];

    for (int i = 1; i < rozmiar; i++) {
        if (tablica[i] > *maksimum) {
            *maksimum = tablica[i];
        }
        if (tablica[i] < *minimum) {
            *minimum = tablica[i];
        }
    }
}

int main() {
    float tablica[] = {1.5f, -3.2f, 4.8f, 7.0f, -1.1f, 0.0f, 3.3f, -6.6f, 8.9f, 2.2f};
    const int ROZMIAR = sizeof(tablica) / sizeof(tablica[0]);
    float maksimum;
    float minimum;

    FindMinMax(tablica, ROZMIAR, &maksimum, &minimum);

    cout << "Tablica: ";
    for (int i = 0; i < ROZMIAR; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;
    cout << "Najwieksza liczba: " << maksimum << endl;
    cout << "Najmniejsza liczba: " << minimum << endl;

    return 0;
}
