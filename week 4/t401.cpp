#include <iostream>
using namespace std;

int n, cnt = 0, arr[100];

int main() {
    while (true) {
        cin >> n;
        if (n == -1) {
            cout << cnt << endl;
            for (int i = 0; i < cnt; ++i) {
                cout << arr[i] << " "
            }
            break;
        }
        arr[cnt] = n;
        cnt++;
    }
    return 0;
}