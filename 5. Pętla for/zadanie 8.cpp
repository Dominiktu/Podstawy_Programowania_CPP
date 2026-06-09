#include <iostream>
using namespace std;

int main(){
    int szer, wys;
    cout << "Podaj szerokosc: "; cin >> szer;
    cout << "Podaj wysokosc: "; cin >> wys;

    for(int r = 0; r < wys; r++){
        for(int s = 0; s < szer; s++){
            if(s < r || s >= szer - r) cout << ' ';
            else cout << '*';
        }
        cout << endl;
    }
    return 0;
}
