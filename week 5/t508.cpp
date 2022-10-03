#include <iostream>
using namespace std;

int n, x, sm = 0;
int main() {
    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> x;
            if (i != j && i < n - 1 && j > i) sm += x;
        }
    }
    cout << sm;
    return 0;
}