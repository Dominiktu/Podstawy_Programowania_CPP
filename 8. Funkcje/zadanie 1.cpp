#include <iostream>
using namespace std;

bool jestParzysta(int x) {
    return x % 2 == 0;
}

int main() {
    int a;
    cout << "Podaj liczbe calkowita: ";
    cin >> a;
    if (jestParzysta(a)) {
        cout << "Liczba " << a << " jest parzysta." << endl;
    } else {
        cout << "Liczba " << a << " jest nieparzysta." << endl;
    }
    return 0;
}
