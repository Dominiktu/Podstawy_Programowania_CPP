#include <iostream>
using namespace std;

int main() {
    const int MAX = 21; // 20 chars + '\0'
    char tekst[MAX];
    cout << "Podaj ciag znakow (max 20 znakow): ";
    cin.getline(tekst, MAX);
    cout << "Wprowadzony ciag znakow: " << tekst << endl;
    return 0;
}
