#include <iostream>
using namespace std;

int main(){
	int punkty;
	cout <<  "Podaj wynik egzaminu (liczba punktow): ";
	cin >> punkty;
	if(punkty<0) cout << "Nie poprawna ilosc punktow";
	else if(punkty<50) cout << "Ocena: niedostateczna";
	else if(punkty<70) cout << "Ocena: dostateczna";
	else if(punkty<85) cout << "Ocena: dobra";
	else if(punkty<100) cout << "Ocena: bardzo dobra";
	else if(punkty<101) cout << "Ocena: celujaca";
	else cout << "Nie poprawna ilosc punktow";
    return 0;
}
