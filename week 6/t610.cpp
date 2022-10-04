#include <iostream>
#include <cstring>
using namespace std;

int n, results[100];
const int MAX_N = 20;
char words[100][MAX_N], letters[100];

int countOccurence(char str[MAX_N], char letter) {
    int cnt = 0;
    for (int i = 0; i < strlen(str); ++i) cnt += (str[i] == letter);
    return cnt;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> letters[i] >> words[i];
        results[i] = countOccurence(words[i], letters[i]);
    }
    for (int i = 0; i < n; ++i) cout << results[i] << ' ' << letters[i] << " in " << words[i] << endl;
    return 0;
}