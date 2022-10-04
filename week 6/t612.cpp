#include <iostream>
#include <string>
using namespace std;

string s;

string upperize(string seq) {
    string ans = "";
    for (int i = 0; i < seq.size(); ++i) ans += toupper(seq[i]);
    return ans;
}

int main() {
    cin >> s;
    cout << upperize(s);
    return 0;
}