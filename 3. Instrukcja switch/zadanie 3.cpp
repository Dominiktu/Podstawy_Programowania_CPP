#include <iostream>
using namespace std;

int main(){
	int godziny;
	char pojazd;
	cout << "Podaj liczbe godzin parkowania: ";
	cin >> godziny;
	cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
	cin >> pojazd;
	switch(pojazd){
		case 'S':
			cout << "Oplata za parkowanie: " << godziny*5;
			break;
		case 'M':
			cout << "Oplata za parkowanie: " << godziny*3;
			break;
		case 'A':
			cout << "Oplata za parkowanie: " << godziny*10;
			break;
		case 's':
			cout << "Oplata za parkowanie: " << godziny*5;
			break;
		case 'm':
			cout << "Oplata za parkowanie: " << godziny*3;
			break;
		case 'a':
			cout << "Oplata za parkowanie: " << godziny*10;
			break;
		default:
			cout << "Niepoprawny rodziaj pojazdu";
			break;
	}
    return 0;
}
