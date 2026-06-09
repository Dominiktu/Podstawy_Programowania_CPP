#include <iostream>
using namespace std;

int GetNumberFromUser() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    return n;
}

long long CalculateFactorial(int n) {
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

void DisplayResult(int n, long long result) {
    cout << "Silnia liczby " << n << " wynosi: " << result << endl;
}

int main() {
    int n = GetNumberFromUser();
    long long res = CalculateFactorial(n);
    DisplayResult(n, res);
    return 0;
}
