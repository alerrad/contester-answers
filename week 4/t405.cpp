#include <iostream>
using namespace std;

int n, arr[1000], ans = 0;
int ind = 0, mx = -999999;

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        if (arr[i] > mx) {
            mx = arr[i];
            ind = i;
        }
    }
    
    int max_el = arr[ind];
    for (int i = 0; i < n; ++i) {
        if (arr[i] == max_el) {
            ans++;
        }
    }
    cout << ans;
    return 0;
}