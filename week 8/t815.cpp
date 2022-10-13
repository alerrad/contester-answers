#include<iostream>

using namespace std;

int f, s, sum;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> f >> s;
    for(int i = f; i <= s; ++i) {
        if(i / 10000000 + i / 1000000 % 10 + i / 100000 % 10 + i / 10000 % 10 == i / 1000 % 10 + i / 100 % 10 + i / 10 % 10 + i % 10) sum ++;
    }
    cout << sum;
    return 0;
}