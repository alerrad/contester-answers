#include <iostream>
#include <string>

using namespace std;

string s;

int main() {
    cin >> s;

    for (int i = 1; i < s.size(); ++i) {
        string k = "", t = "";
        for (int j = i; j < s.size(); ++j) {
            t += s[j];
        }
        while (t.size() > 1) {
            int cnt = 0;
            for (int j = 0; j < t.size(); ++j) {
                cnt += int(t[j] - '0');
            }
            t = "";
            while (cnt > 0) {
                t = char((cnt % 10) + '0') + t;
                cnt /= 10;
            }
        }
        for (int j = 0; j < i; ++j) {
            k += s[j];
        }
        while (k.size() > 1) {
            int ans = 0;
            for (int j = 0; j < k.size(); ++j) {
                ans += int(k[j] - '0');
            }
            k = "";
            while (ans > 0) {
                k = char((ans % 10) + '0') + k;
                ans /= 10;
            }
        }

        if (t == k) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}