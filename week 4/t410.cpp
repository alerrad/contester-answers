#include <iostream>
#include <cmath>

using namespace std;
int n;

int main() {
    cin >> n;
    for (int i = 2; i <= round(sqrt(n)); ++i) {
        if (n % i == 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}