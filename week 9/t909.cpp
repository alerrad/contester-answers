#include <iostream>
#include <cstring>
using namespace std;

const int N = 1001;
char s[N];

bool is_divisible_by_11(char *num) {
    bool change = false;
    int sum = 0;
    for (int i = 0; i < strlen(num); ++i) {
        if (change) sum += (*(num + i) - '0');
        else sum -= (*(num + i) - '0');
        change = !change;
    }
    return !sum;
}

int main() {
    cin >> s;
    if (is_divisible_by_11(s)) cout << "YES";
    else cout << "NO";
    return 0;
}