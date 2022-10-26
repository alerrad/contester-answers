#include <iostream>
using namespace std;

int a, b, c, feb = 28;

int main() {
    cin >> a >> b >> c;
    if (c % 4 == 0 && c % 100 != 0 || c % 400 == 0) feb = 29;
    
    if (b == 2) {
        if (a + 1 > feb) {
            a = 1;
            b++;
        }
        cout << a << ' ' << b << ' ' << c;
        return 0;
    }
    // 1 3 5 7 8 10 12 ---> 31 days
    if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
        if (a + 1 > 31) {
            b++;
            a = 1;
        } else a++;
    } else {
        if (a + 1 > 30) {
            b++;
            a = 1;
        } else a ++;
    }
    
    if (b > 12) {
        c++;
        b = 1;
    }
    cout << a << ' ' << b << ' ' << c;
    return 0;
}