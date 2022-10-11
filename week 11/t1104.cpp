#include <iostream>
#include <string>

using namespace std;

string s, x;

int main() {
    getline(cin, s);
    cin >> x;

    for (int i = 0; i < s.size(); ++i) {
        bool avarice = false;
        for (int j = 0; j < x.size(); ++j) {
            if (s[i] == x[j]) {
                avarice = true;
                break;
            }
        }
        if (avarice) cout << '*';
        else cout << s[i];
    }

    return 0;
}