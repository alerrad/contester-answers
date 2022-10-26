#include <iostream>
#include <cmath>
using namespace std;

int n;
double x, a;
int main() {
    cin >> x >> a >> n;
    
    double ans = pow(x + a, 2);
    for (int i = 1; i < n; ++i) {
        ans = pow(ans + a, 2);
    }
    
    cout << ans + a;
    return 0;
}