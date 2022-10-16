#include <iostream>
#include <vector>
#include <string>

using namespace std;

int n;
string s;
vector <char> history;

int main() {
    cin >> n >> s;

    for (int i = 0; i < n; ++i) {
        if (s[i] == '[' || s[i] == '(' || s[i] == '{') history.push_back(s[i]);
        else {
            if (history.size() == 0 || s[i] == ']' && history[history.size() - 1] != '[' || s[i] == ')' && history[history.size() - 1] != '(' || s[i] == '}' && history[history.size() - 1] != '{') {
                cout << "No";
                return 0;
            }
            history.pop_back();
        }
    }

    if (!history.size()) cout << "Yes";
    else cout << "No";
    return 0;
}