#include <iostream>
using namespace std;

int main(){
    int a[2][3];
    cout << "Podaj 6 liczb calkowitych do macierzy 2x3:\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    int b[3][2];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            b[j][i] = a[i][j];
        }
    }

    cout << "Transponowana macierz:\n";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
