#include <iostream>

using namespace std;

bool x, y;
bool myXor(bool x, bool y) {
    return (x && !y || !x && y);
}

int main() {
    cin >> x >> y;
    cout << myXor(x, y);
    return 0;
}