#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 100;
char s[N];

string format_number(char *from) {
    int cnt = 0;
    string ans = "";
    for (int i = strlen(from) - 1; i >= 0; --i) {
        if (cnt == 3) {
            ans += " ";
            cnt = 0;
        }
        cnt++;
        ans += *(from + i);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    cin.getline(s, N);
    string res = format_number(s);
    cout << res;
    return 0;
}