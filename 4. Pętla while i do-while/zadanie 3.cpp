#include <iostream>
using namespace std;

int main(){
	int liczba;
	char wybor;

	do{
		cout << "Podaj liczbe: ";
		cin >> liczba;
		cout << "Wprowadzona liczba: " << liczba << endl;
		cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
		cin >> wybor;
	} while(wybor == 't' || wybor == 'T');
    cout << "Dziekuje za wprowadzenie liczb! ";
	return 0;
}

