#include <iostream>
using namespace std;

int main(){
	int N;
	cout << "Podaj liczbe calkowita dodatnia N: ";
	if(!(cin >> N)) return 0;

	if(N < 1){
		cout << "N musi byc co najmniej 1" << endl;
		return 0;
	}

	int suma = 0;
	int i = 1;
	while(i <= N){
		suma += i;
		i++;
	}

	cout << "Suma liczb od 1 do " << N << " wynosi: " << suma << endl;
	return 0;
}

