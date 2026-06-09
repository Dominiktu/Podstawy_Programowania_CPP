#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Podaj liczbe calkowita dodatnia N: ";
    cin >> N;

    int licznik = 0;
    int i = 1;
    if(N >= 1){
        do{
            if(i % 2 == 0) licznik++;
            i++;
        } while(i <= N);
    }

    cout << "Liczba liczb parzystych w przedziale 1.." << N << " wynosi: " << licznik << endl;
    return 0;
}
