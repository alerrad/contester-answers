#include <iostream>
#include <string>

using namespace std;

string s, x;

int main() {
    getline(cin, s);
    cin >> x;

    for (int i = 0; i < s.size(); ++i) {
        int ind = i, cnt = 0;
        for (int j = 0; j < x.size(); ++j) {
            if (x[j] == s[i + j]) cnt++;
            else break;
        }
        if (cnt == x.size()) {
            cout << ind;
            return 0;
        }
    }

    cout << -1;
    return 0;
}