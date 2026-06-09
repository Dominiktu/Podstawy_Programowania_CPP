#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void DuzaMala(int guess, int target) {
    if (guess < target) cout << "Za malo" << endl;
    else if (guess > target) cout << "Za duzo" << endl;
}

bool CheckLiczba(int guess, int target) {
    return guess == target;
}

int main() {
    srand((unsigned)time(NULL));
    int wyl = rand() % 100 + 1;
    int guess;
    cout << "Zgadnij liczbe od 1 do 100:" << endl;
    while (true) {
        cout << "Podaj liczbe: ";
        if (!(cin >> guess)) break;
        DuzaMala(guess, wyl);
        if (CheckLiczba(guess, wyl)) {
            cout << "Gratulacje! Odgadles liczbe." << endl;
            break;
        }
    }
    return 0;
}
