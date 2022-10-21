#include <iostream>
using namespace std;
int a, b;

int main() {
    cin >> a >> b;
    if (a > b) cout << ">";
    else if (a < b) cout << "<";
    else cout << "=";
    return 0;
}