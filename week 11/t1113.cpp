#include <iostream>
#include <sstream>

using namespace std;

int n = 1;
string s, num = "";

int main() {
    cin >> s;

    for (int i = 0; i < s.length(); ++i) {
        if (isdigit(s[i])) num.push_back(s[i]);
        else {
            stringstream boba;
            boba << num;
            boba >> n;
            num.clear();
            for (int j = 0; j < n; ++j) cout << s[i];
            n = 1;
        }
    }

    return 0;
}