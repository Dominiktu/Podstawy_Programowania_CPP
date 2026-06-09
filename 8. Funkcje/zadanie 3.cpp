#include <iostream>
#include <string>
using namespace std;

string GetTextFromUser() {
    string s;
    cout << "Podaj ciag znakow: ";
    getline(cin, s);
    return s;
}

string ReverseString(string s) {
    int n = s.size();
    for (int i = 0; i < n/2; i++) {
        swap(s[i], s[n-1-i]);
    }
    return s;
}

void DisplayResult(const string &result) {
    cout << "Odwrocony ciag: " << result << endl;
}

int main() {
    string text = GetTextFromUser();
    string rev = ReverseString(text);
    DisplayResult(rev);
    return 0;
}
