#include <iostream>

using namespace std;

long long a, b;
long long* ptra = &a;
long long* ptrb = &b;
void swap2(ll a, ll b) {
    *ptra = b;
    *ptrb = a;
}

int main() {
    cin >> a >> b;
    swap2(a, b);
    cout << a << ' ' << b;
    return 0;
}