#include <iostream>
#include <string>

using namespace std;

string s;
int cnt = 0;

int main() {
    getline(cin, s);

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') cnt++;
        else {
            if (cnt <= 0) {
                cout << "INVALID";
                return 0;
            }
            cnt--;
        }
    }

    if (!cnt) cout << "VALID";
    else cout << "INVALID";
    return 0;
}