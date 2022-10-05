#include <iostream>

using namespace std;

int n, res[100];
char arr[100][20], x[100];
char (*ptarr)[20];
char* ptrx = x;
int* ptres = res;

int main() {
    ptarr = arr;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> arr[i];
        for (int j = 0; j < 20; ++j) res[i] += (arr[i][j] == x[i]);
    }
    for (int i = 0; i < n; ++i) {
        cout << *(ptres + i) << ' ' << *(ptrx + i) << " in " << *(ptarr + i) << endl;
    }
    return 0;
}