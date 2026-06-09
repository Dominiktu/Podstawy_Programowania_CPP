#include <iostream>
using namespace std;

int main(){
	int N;
	cout << "Podaj liczbe calkowita dodatnia N: ";
	if(!(cin >> N)) return 0;

	if(N < 2){
		cout << "Brak liczb parzystych w przedziale od 2 do " << N << endl;
		return 0;
	}

	int i = 2;
	while(i <= N){
		cout << i << " ";
		i += 2;
	}
	cout << endl;

	return 0;
}

