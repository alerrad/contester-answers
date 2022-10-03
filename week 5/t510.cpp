#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector <int> arr;
int n, m, x;
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> x;
            if (x > 0) arr.push_back(x);
        }
    }
    sort(arr.begin(), arr.end());
    cout << arr.size() << endl;
    for (int i = 0; i < arr.size(); ++i) cout << arr[i] << ' ';
    return 0;
}