#include <iostream>
#include <cstring>
using namespace std;

const int MAX_N = 20;
char a, b, str1[MAX_N], str2[MAX_N];

int countOccurence(char str[MAX_N], char letter) {
    int cnt = 0;
    for (int i = 0; i < strlen(str); ++i) cnt += (str[i] == letter);
    return cnt;
}

int main() {
    cin >> a >> b >> str1 >> str2;
    cout << countOccurence(str1, a) << ' ' << a << "characters in " << str1 << endl;
    cout << countOccurence(str2, b) << ' ' << b << "characters in " << str2;
    return 0;
}