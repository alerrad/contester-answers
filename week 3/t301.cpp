#include <iostream>
using namespace std;
double x, y, z;

int main() {
    cin >> x >> y >> z;
    if (x < y && y < z) cout << "YES";
    else cout << "NO";
    return 0;
}