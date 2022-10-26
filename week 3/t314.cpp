#include <iostream>
#include <cmath>
using namespace std;

int n;
double ans = sqrt(2);

int main() {
    cin >> n;
    
    for (int i = 1; i < n; ++i) {
        ans = sqrt(2 + ans);
    }
    
    cout << ans;
    return 0;
}