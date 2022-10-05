#include <iostream>
#include <cstring>

using namespace std;

const int N = 100;
char s[N], res[N];

void only_letters(char* from) {
    for (int i = 0; i < strlen(from); ++i) {
        if (isalpha(*(from + i))) cout << *(from + i);
    }
}

int main() {
    cin >> s;
    only_letters(s);
    return 0;
}