#include <iostream>
using namespace std;

int main(){
	float temperatura;
	char znak;
	cout << "Podaj temperature w stopniach Celsjusza: ";
	cin >>temperatura;
	cout << "wybierz jednostke docelowa (K - kelvin, F - Fahrenheit): ";
	cin >> znak;
	switch(znak){
		case 'K':
			cout << "Temperatura w stopniach kelvina: " << temperatura+273.15;
			break;
		case 'F':
			cout << "Temperatura w stopniach Fahrenheita: " << (temperatura*9/5)+32;
			break;
		case 'k':
			cout << "Temperatura w stopniach kelvina: " << temperatura+273.15;
			break;
		case 'f':
			cout << "Temperatura w stopniach Fahrenheita: " << (temperatura*9/5)+32;
			break;
		default:
			cout << "Niepoprawna jednosta docelowa";
			break;
	}
    return 0;
}
