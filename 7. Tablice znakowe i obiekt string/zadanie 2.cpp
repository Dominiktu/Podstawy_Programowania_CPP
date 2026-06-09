#include <iostream>
using namespace std;

int main() {
    const int MAX = 21;
    char tekst[MAX];
    cout << "Podaj ciag znakow (max 20 znakow): ";
    cin.getline(tekst, MAX);
    for (int i = 0; tekst[i] != '\0'; i++) {
        if (tekst[i] == 'a') tekst[i] = 'o';
    }
    cout << "Zmodyfikowany ciag znakow: " << tekst << endl;
    return 0;
}
