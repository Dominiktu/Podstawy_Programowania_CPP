#include <iostream>
using namespace std;

int main(){
    const int ROZ = 10;
    int tab[ROZ];
    cout << "Podaj " << ROZ << " liczb calkowitych:\n";

    for(int i = 0; i < ROZ; i++) {
        cin >> tab[i];
    }

    int suma = 0;
    cout << "Liczby parzyste: ";
    for(int i = 0; i < ROZ; i++){
        if(tab[i] % 2 == 0){
            cout << tab[i] << ", ";
            suma += tab[i];
        }
    }
    cout << endl << "Suma liczb parzystych: " << suma << endl;
    return 0;
}
