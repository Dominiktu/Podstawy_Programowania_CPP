#include <iostream>
using namespace std;

int main(){
	int a,b;
	char znak;
	cout << "Podaj pierwsza liczbe: ";
	cin >>a;
	cout << "Podaj druga liczbe: ";
	cin >>b;
	cout << "Podaj znak dzialania (+, -, *, /): ";
	cin >> znak;
	switch(znak){
		case '+':
			cout << "Wynik: " << a+b;
			break;
		case '-':
			cout << "Wynik: " << a-b;
			break;
		case '*':
			cout << "Wynik: " << a*b;
			break;
		case '/':
			cout << "Wynik: " << a/b;
			break;
		default:
			cout << "Niepoprawny znak dzialania";
			break;
	}
    return 0;
}
