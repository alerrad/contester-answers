#include <iostream>
#include <string>
using namespace std;

string s;
int cnt = 0;

int main () {
    cin >> s;
    if (s.size() >= 5) {
        for (int i = 0; i < s.size()-4; ++i) {
            if (s[i] == '>' && s[i+1] == '>' && s[i+2] == '-' && s[i+3] == '-' && s[i+4] == '>' || s[i] == '<' && s[i+1] == '-' && s[i+2] == '-' && s[i+3] == '<' && s[i+4] == '<') {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}