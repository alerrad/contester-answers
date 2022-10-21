#include <iostream>
using namespace std;

int a, b;

int main() {
    cin >> a >> b;
    if (a % b == 0) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
    return 0;
}