#include <iostream>
#include <string>
using namespace std;

string s;
string swapcase(string seq) {
    string ans = "";
    for (int i = 0; i < seq.size(); ++i) {
        if (islower(seq[i])) ans += toupper(seq[i]);
        else if(isupper(seq[i])) ans += tolower(seq[i]);
    }
    return ans;
}

int main() {
    cin >> s;
    cout << swapcase(s);
    return 0;
}