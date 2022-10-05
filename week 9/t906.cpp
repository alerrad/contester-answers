#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 1001;
char s[N];

string format_number(string from) {
    int cnt = 0;
    string ans = "";
    for (int i = from.size() - 1; i >= 0; --i) {
        if (cnt == 3) {
            ans += " ";
            cnt = 0;
        }
        cnt++;
        ans += from[i];
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

string removeDublicates(char *text) {
    string tmp = "", ans = "";
    string* ptrTmp = &tmp;
    string* ptrAns = &ans;
    for (int i = 0; i < strlen(text); ++i) {
        if (isdigit(*(text + i))) *ptrTmp += *(text + i);
        else {
            if (tmp.size() > ans.size()) *ptrAns = *ptrTmp;
            tmp.clear();
        }
    }
    return format_number(*ptrAns);
}

int main() {
    cin.getline(s, N);
    s[strlen(s)] = ' ';
    string res = removeDublicates(s);
    cout << res;
    return 0;
}