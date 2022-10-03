#include <iostream>

using namespace std;

int n, arr[100][100], x;
int main() {
    cin >> n;
  
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cin >> arr[i][j];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && arr[i][j] != arr[j][i]) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}