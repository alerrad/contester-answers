#include <iostream>
#include <string>
using namespace std;

int k;
string s, decrpt = "";
string alph = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {
    getline(cin, s);
    cin >> k;
    for (int i = 0; i < s.size(); ++i) {
        int ind = alph.rfind(s[i]) - k;
        decrpt += alph[ind];
    }
    cout << decrpt;
    return 0;
}