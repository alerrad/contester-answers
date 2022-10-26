#include <iostream>
using namespace std;

int n;
double a, tmp;

int main() {
    cin >> a >> n;
    tmp = a;
    for (int i = 1; i < n; ++i) a += tmp;
    cout << a;
    return 0;
}