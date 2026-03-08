#include <iostream>
using namespace std;

int main(){
	float waga, wzrost, bmi;
	cout <<  "Podaj wage(W kg): ";
	cin >> waga;
	cout <<  "Podaj wzrost(W metrach): ";
	cin >> wzrost;
	bmi = waga / (wzrost*wzrost);
	cout << endl << "Twoje BMI wynosi: " << bmi <<endl;;
	if(bmi<18.5) cout << "Twoj stan wagowy: Niedowaga";
	else if(bmi<25) cout << "Twoj stan wagowy: W normie";
	else if(bmi<30) cout << "Twoj stan wagowy: Nadwaga";
	else cout << "Twoj stan wagowy: otyłość";
    return 0;
}
