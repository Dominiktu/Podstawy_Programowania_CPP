#include <iostream>
using namespace std;

int main(){
    const int ROZ = 5;
    int tab[ROZ];
    cout << "Podaj " << ROZ << " liczb calkowitych:\n";
    for(int i = 0; i < ROZ; i++) {
        cin >> tab[i];
    }

    for(int i = 0; i < ROZ; i++){
        if(tab[i] < 0) tab[i] = 0;
    }

    cout << "Zmienione liczby: ";
    for(int i = 0; i < ROZ; i++){
        cout << tab[i];
        if(i+1 < ROZ) cout << ", ";
    }
    cout << endl;
    return 0;
}
