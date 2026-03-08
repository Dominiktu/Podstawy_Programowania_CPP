#include <iostream>
using namespace std;

int main(){
	int liczba;
	cout << "Podaj liczbe calkowita: ";
	cin >> liczba;
	if(liczba%2==0) cout << endl<<"Liczba "<< liczba <<" jest parzysta"<< endl;
	else cout << endl<<"Liczba "<< liczba <<" jest nieparzysta" << endl;
	
	if(liczba%3==0) cout <<"Liczba "<< liczba <<" jest podzielna przez 3";
	else cout <<"Liczba "<< liczba <<" jest niepodzielna przez 3";
    return 0;
}
