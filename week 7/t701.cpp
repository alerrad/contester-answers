#include <iostream>
#include <map>

using namespace std;

int n;
map <int, int> table;

int fibbo(int n) {
    if (table.find(n) != table.end()) return table[n];
    table[n] = fibbo(n - 1) + fibbo(n - 2);
    return table[n];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    table[0] = 0;
    table[1] = 1;
    cout << fibbo(n);
    return 0;
}