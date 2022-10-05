#include <iostream>
#include <cstring>
using namespace std;

const int N = 10000;
char s1[N], s2[N];

bool compare(char* s1, char* s2, int k1, int k2) {
    if (k1 != k2) return false;
    for (int i = 0; i < k1; ++i) {
        if (*(s1 + i) != *(s2 + i)) return false;
    }
    return true;
}

int main() {
    cin >> s1 >> s2;
    if (compare(s1, s2, strlen(s1), strlen(s2))) cout << "YES";
    else cout << "NO";
    return 0;
}