#include <iostream>
#include <string>
using namespace std;

string a, b, c;
string compare(string first, string second) {
    if (first.size() > second.size()) return first;
    if (second.size() > first.size()) return second;
    string ans = first;

    for (int i = 0; i < ans.size(); ++i) {
        if (first[i] < second[i]) return second;
    }

    return first;
}

int main() {
    cin >> a >> b >> c;
    cout << compare(a, compare(b, c));
    return 0;
}