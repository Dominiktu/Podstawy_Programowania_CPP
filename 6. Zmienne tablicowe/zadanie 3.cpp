#include <iostream>
using namespace std;

int main(){
    const int ROZ = 10;
    int tab[ROZ];
    cout << "Podaj " << ROZ << " liczb calkowitych:\n";
    for(int i = 0; i < ROZ; i++) {
        cin >> tab[i];
    }

    int najm = tab[0];
    for(int i = 1; i < ROZ; i++) {
        if(tab[i] < najm) najm = tab[i];
    }

    cout << "Najmniejsza liczba to: " << najm << endl;
    return 0;
}
