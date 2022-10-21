#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int n, cnt = 1;
set <char> lol;
string s;

int main() {
    cin >> n >> s;
    sort(s.begin(), s.end());
    for (int i = 0; i < n; ++i) lol.insert(s[i]);
    cout << lol.size() << endl;
    for (int i = 0; i < n; ++i) {
        if (s[i] == s[i+1]) cnt++;
        else {
            cout << s[i] << " " << cnt << endl;
            cnt = 1;
        }
    }
    return 0;
}