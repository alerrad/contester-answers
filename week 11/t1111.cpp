#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool in_braces = false;
string s, tmp, ans = "";

int main() {
    getline(cin, s);
    
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            in_braces = true;
        }
        else if (s[i] == ')') {
            in_braces = false;
            reverse(tmp.begin(), tmp.end());
            ans.append(tmp);
            tmp.clear();
        }
        else {
            if (!in_braces) ans.push_back(s[i]);
            else tmp.push_back(s[i]);
        }
    }

    cout << ans;
    return 0;
}