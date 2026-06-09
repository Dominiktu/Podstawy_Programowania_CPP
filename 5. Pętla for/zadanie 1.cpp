#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Podaj liczbe N: ";
    cin >> N;

    int suma = 0;
    for(int i = 1; i <= N; i++){
        suma += i;
    }

    cout << "Suma liczb od 1 do " << N << " wynosi: " << suma << endl;
    return 0;
}
