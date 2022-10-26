#include <iostream>
#include <cmath>

using namespace std;

double x, sm = 0, fact = 1;
bool plusik = true;

int main() {
    cin >> x;

    for (int i = 1; i <= 13; i++) {
        fact *= i;
        if (i % 2) {
            if (plusik) {
                sm += (pow(x, i) / fact);
                plusik = false;
            }
            else {
                sm -= (pow(x, i) / fact);
                plusik = true;
            }
        }
    }

    cout << sm;
    return 0;
}