#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

string s;
vector <string> arr;

int main() {
    cin >> s;
    string s1 = s;
    int n = s.size();
    arr.push_back(s1);

    while (true) {
        string cp = "";
        cp.push_back(s[n - 1]);
        for (int i = 0; i < n - 1; ++i) cp.push_back(s[i]);
        if (cp == s1) break;
        arr.push_back(cp);
        s = cp;
    }

    sort(arr.begin(), arr.end());
    cout << arr[arr.size() - 1];
    return 0;
}