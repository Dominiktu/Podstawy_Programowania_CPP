#include <iostream>
using namespace std;

int main() {
    const int MAX = 101;
    char tekst[MAX];
    cout << "Podaj ciag znakow (max 100 znakow): ";
    cin.getline(tekst, MAX);
    char znak;
    cout << "Podaj znak do zliczenia: ";
    cin >> znak;

    int count = 0;
    cout << "Pozycje wystapien: ";
    for (int i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == znak) {
            if (count > 0) cout << ", ";
            cout << (i + 1);
            count++;
        }
    }
    cout << endl << "Liczba wystapien znaku '" << znak << "': " << count << endl;
    return 0;
}
