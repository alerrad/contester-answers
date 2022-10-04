#include <iostream>
using namespace std;

bool x, y, z;
bool election(bool x, bool y, bool z) {
    return (x + y + z) > 1;
}

int main() {
    cin >> x >> y >> z;
    cout << election(x, y, z);
    return 0;
}