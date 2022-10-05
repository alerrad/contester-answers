#include <iostream>
#include <vector>
using namespace std;

const int N = 100;
int n, arr[N];
int* ptarr = arr;

void convertion(int massiv[N]) {
    vector <int> evens;
    vector <int> odds;
    // Storing answers
    for (int i = 0; i < n; ++i) {
        if ((i + 1) % 2 == 0) evens.push_back(massiv[i]);
        else odds.push_back(massiv[i]);
    }
    // Convertion
    odds.insert(odds.end(), evens.begin(), evens.end());
    for (int i = 0; i < n; ++i) *(massiv + i) = odds[i];
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> *(ptarr + i);
    convertion(arr);
    for (int i = 0; i < n; ++i) cout << *(ptarr + i) << ' ';
    return 0;
}