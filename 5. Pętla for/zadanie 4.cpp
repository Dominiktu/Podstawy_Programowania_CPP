#include <iostream>
using namespace std;

int main(){
    int w, k;
    cout << "Podaj liczbe wierszy: "; cin >> w;
    cout << "Podaj liczbe kolumn: "; cin >> k;

    int val = 1;
    for(int i = 0; i < w; i++){
        for(int j = 0; j < k; j++){
            cout << val << "\t";
            val += 2; // kolejne liczby nieparzyste
        }
        cout << endl;
    }
    return 0;
}
