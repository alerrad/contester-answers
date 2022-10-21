#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n, tmp;

vector< vector<int> > arr;

bool cmp(vector<int> a, vector<int> b) {
    int secs1 = a[0] * 3600 + a[1] * 60 + a[2];
    int secs2 = b[0] * 3600 + b[1] * 60 + b[2];
    return (secs1 < secs2);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        vector<int> kek;
        for (int j = 0; j < 3; ++j) {
            cin >> tmp;
            kek.push_back(tmp);
        }
        arr.push_back(kek);
    }
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < 3; ++j) cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}