#include <iostream>

using namespace std;

int a, b, c, d;
int min(int a, int b, int c, int d) {
    return min(a, min(b, min(c, d)));
}

int main() {
    cin >> a >> b >> c >> d;
    cout << min(a, b, c, d);
    return 0;
}