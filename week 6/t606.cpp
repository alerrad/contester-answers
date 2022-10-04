#include <iostream>
#include <string>

using namespace std;

int n, arr1[100], arr2[100];
string answer(int A[], int B[], int sz) {
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < sz; ++i) cnt1 += (A[i] > 0);
    for (int i = 0; i < sz; ++i) cnt2 += (B[i] > 0);
    if (cnt1 > cnt2) return "Number of positives in the first array is greater";
    if (cnt1 < cnt2) return "Number of positives in the second array is greater";
    return "Numbers are equal";
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> arr1[i];
    for (int i = 0; i < n; ++i) cin >> arr2[i];
    cout << answer(arr1, arr2, n);
    return 0;
}