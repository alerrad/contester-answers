#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> primes;

int main() {
    cin >> n;
    for (int i = 2; i <= n; ++i) {
        bool is_prime = true;
        for (int j = 0; j < primes.size(); ++j) {
            if (i % primes[j] == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            cout << i << ' ';
            primes.push_back(i);
        }
    }
    return 0;
}