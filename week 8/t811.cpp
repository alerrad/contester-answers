#include <iostream>
#include <string>
using namespace std;

string s;
int main() {
    getline(cin, s);
    int n = s.size();
    for (int i = 0; i < n; ++i) {
        if (s[i] != s[n - 1 - i]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}