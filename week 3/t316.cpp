#include <iostream>
using namespace std;

int n;
double a;

int main() {
    cin >> a >> n;
    double ans = a;

    for (int i = 1; i < n; ++i) ans *= (a + i);
    
    cout << ans;
    return 0;
}