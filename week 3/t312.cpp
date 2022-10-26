#include <iostream>
#include <cmath>
using namespace std;

int n;
double ans = 1;

int main() {
    cin >> n;
    
    for (int i = 1; i <= n; ++i) {
        ans *= (1 + 1 / pow(i, 2));
    }
    
    cout << ans;
    return 0;
}