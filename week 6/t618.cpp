#include <iostream>
#include <string>
using namespace std;

int n;
char expr[1000];
string restricted = "!#@%$^&(){}[]_?=", operators = "+-/*";

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> expr[i];
        if (isalpha(expr[i]) || restricted.find(expr[i]) != string::npos || i != 0 && operators.find(expr[i]) != string::npos && operators.find(expr[i - 1]) != string::npos || i > 0 && expr[i] == '0' && expr[i-1] == '/') {
            cout << "NO";
            return 0;
        }
    }
    
    cout << "YES";
    return 0;
}