#include <iostream>
using namespace std;

int main(){
    const int ROZ = 5;
    int tab[ROZ];
    cout << "Podaj " << ROZ << " liczb calkowitych:\n";
    for(int i = 0; i < ROZ; i++) {
        cin >> tab[i];
    }

    int suma = 0;
    for(int i = 0; i < ROZ; i++) {
        suma += tab[i];
    }

    double srednia = (double)suma / ROZ;
    cout << "Srednia liczb: " << srednia << endl;
    return 0;
}
