#include <iostream>
#include <string>

using namespace std;

string s;
bool found = false;
int cnt = 0, start, fin;

int main() {
    getline(cin, s);
  
    // Begin
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != ' ') {
            start = i;
            break;
        }
    }

    // End
    for (int i = start; i < s.size(); ++i) {
        if (s[i] != ' ') fin = i;
    }

    // Mid traverse
    for (int i = start; i < fin + 1; ++i) {
        if (s[i] != ' ') {
            cout << s[i];
            cnt = 0;
        }
        else {
            if (cnt < 1) cout << ' ';
            cnt++;
        }
    }
    return 0;
}