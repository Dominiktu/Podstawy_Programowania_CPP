#include <iostream>
using namespace std;

int main(){
    const int R = 3, C = 3;
    int a[R][C];
    cout << "Podaj 9 liczb calkowitych do macierzy 3x3:\n";
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> a[i][j];
        }
    }

    int suma = 0;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            suma += a[i][j];
        }
    }
    double sred = (double)suma / (R*C);
    cout << "Srednia liczb: " << sred << endl;
    return 0;
}
