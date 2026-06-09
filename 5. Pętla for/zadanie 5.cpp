#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Podaj liczbe N: "; cin >> N;
    for(int a = 1; a <= N; a++){
        for(int b = 1; b <= N; b++){
            cout << a << " * " << b << " = " << (a*b) << endl;
        }
        cout << endl;
    }
    return 0;
}
