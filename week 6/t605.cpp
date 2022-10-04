#include <iostream>

using namespace std;

int x, y;
char getSign(int x, int y) {
    if (x > y) return '>';
    if (x < y) return '<';
    return '=';
}

int main() {
    cin >> x >> y;
    cout << getSign(x, y);
    return 0;
}