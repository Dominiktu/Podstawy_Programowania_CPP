#include <iostream>
using namespace std;

void GetArrayFromUser(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Podaj liczbe nr " << (i + 1) << ": ";
        cin >> arr[i];
    }
}

int FindMaxValue(int arr[], int n) {
    int m = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > m) m = arr[i];
    }
    return m;
}

void DisplayResult(int maxValue) {
    cout << "Najwieksza liczba: " << maxValue << endl;
}

int main() {
    const int ROZ = 5;
    int tab[ROZ];
    GetArrayFromUser(tab, ROZ);
    int max = FindMaxValue(tab, ROZ);
    DisplayResult(max);
    return 0;
}
