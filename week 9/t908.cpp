#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string a, b;

string addVeryLongInteger(string frst, string scnd) {
    string res = "", num1 = frst, num2 = scnd;
    if (num1.length() > num2.length()) swap(num1, num2);
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    int remainder = 0;
    for (int i = 0; i < num1.length(); ++i) {
        int sum = (num1[i] - '0') + (num2[i] - '0') + remainder;
        res.push_back(sum % 10 + '0');
        remainder = sum / 10;
    }
    for (int i = num1.length(); i < num2.length(); ++i) {
        int sum = (num2[i] - '0') + remainder;
        res.push_back(sum % 10 + '0');
        remainder = sum / 10;
    }
    if (remainder) res.push_back(remainder + '0');
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    cin >> a >> b;
    string ans = addVeryLongInteger(a, b);
    cout << ans;
    return 0;
}