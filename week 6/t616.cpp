#include <iostream>
#include <cmath>
using namespace std;

int n;
const int MAX_N = 31;
char nums[MAX_N];

int convert_to_decimal(char seq[MAX_N]) {
    int ans = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (seq[i] == '1') {
            ans += pow(2, n-i-1);
        }
    }
    return ans;
}

int main() {
    cin >> n >> nums;
    cout << convert_to_decimal(nums);
    return 0;
}