#include <iostream>
using namespace std;

int a, b, c, feb = 28;

int main() {
    cin >> a >> b >> c;
    if (c % 4 == 0 && c % 100 != 0 || c % 400 == 0) feb = 29;
    
    if (a > 31 || b == 2 && a > feb || b > 12) {
        cout << "no";
        return 0;
    }
    // 1 3 5 7 8 10 12 ---> 31 days
    if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
        if (a > 31) {
            cout << "no";
            return 0;
        }
    } else {
        if (a > 30) {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}