#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int MAX = 101;
    char tekst[MAX];
    cout << "Podaj ciag znakow (max 100 znakow): ";
    cin.getline(tekst, MAX);

    int n = strlen(tekst);
    char odw[MAX];
    for (int i = 0; i < n; i++) {
        odw[i] = tekst[n - 1 - i];
    }
    odw[n] = '\0';

    cout << "Odwrocony ciag: " << odw << endl;
    return 0;
}
