#include <iostream>
using namespace std;

int n, arr[100];
int* ptarr = arr;

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> *(ptarr + i);
    for (int i = 0; i < n; ++i) cout << *(ptarr + i) << ' ';
    return 0;
}