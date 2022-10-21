#include <iostream>
#include <string>
using namespace std;

int n, cnt = 0;
string s;

int main() {
    cin >> n >> s;
    
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'A') {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}