#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 10;
    int *wskA = &a;
    int *wskB = &b;

    cout << "Przed modyfikacja:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    *wskA += 10;
    *wskB += 10;

    cout << endl;
    cout << "Po modyfikacji:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
