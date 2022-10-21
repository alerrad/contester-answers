#include <iostream>
#include <cmath>
using namespace std;

double n, arr[100];
int cnt = 0;

int main() {
    while (true) {
        cin >> n;
        if (!n) {
            cout << cnt << endl;
            for (int i = cnt - 1; i >= 0; --i) {
                cout << sqrt(arr[i]) << endl;
            }
            break;
        }
        arr[cnt] = n;
        cnt++;
    }
    return 0;
}