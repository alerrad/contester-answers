#include <iostream>
#include <string>

using namespace std;

string s, x;
int ind = -1;

int main() {
    getline(cin, s);
    cin >> x;

    for (int i = 0; i < s.size(); ++i) {
        int cnt = 0;
        for (int j = 0; j < x.size(); ++j) {
            if (x[j] == s[i + j]) cnt++;
            else break;
        }
        if (cnt == x.size()) ind = i;
    }
    
    cout << ind;
    return 0;
}