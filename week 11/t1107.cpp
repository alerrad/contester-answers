#include <iostream>
#include <sstream>

using namespace std;

int cnt = 0;
string s;

int main() {
    cin >> s;

    while (s.length() != 1) {
        int res = 0;
        for (int i = 0; i < s.length(); ++i) {
            int tmp;
            stringstream container;
            container << s[i];
            container >> tmp;
            res += tmp;
        }
        stringstream contr;
        contr << res;
        contr >> s;
        cnt++;
    }

    cout << s << ' ' << cnt;
    return 0;
}