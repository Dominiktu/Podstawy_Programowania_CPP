#include <iostream>
using namespace std;

struct Samochod {
    string marka;
    string model;
    int rok_produkcji;
};

void WyswietlDane(const Samochod &samochod) {
    cout << "Dane samochodu:" << endl;
    cout << "Marka: " << samochod.marka << endl;
    cout << "Model: " << samochod.model << endl;
    cout << "Rok produkcji: " << samochod.rok_produkcji << endl;
}

int main() {
    Samochod samochod = {"Toyota", "Corolla", 2018};
    WyswietlDane(samochod);
    return 0;
}
