#include <iostream>
#include <cstring>
using namespace std;

const int N = 16;
char s[N];
int dots = 0, nums = 0;

int main() {
    cin >> s;
    int leng = strlen(s);
    if (leng > 15) {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < strlen(s); ++i) {
        if (isdigit(s[i])) nums++;
        else if (s[i] == '.') {
            if (nums > 3 || nums == 0) {
                cout << 0;
                return 0;
            }
            else if (nums == 3) {
                if (s[i - 3] > '2' || s[i - 3] == '2' && s[i - 2] > '5' || s[i - 3] == '2' && s[i - 2] == '5' && s[i - 1] > '5') {
                    cout << 0;
                    return 0;
                }
            }
            nums = 0;
            dots++;
        } else {
            cout << 0;
            return 0;
        }
    }
    if (dots != 3 || nums > 3 || nums == 0) {
        cout << 0;
        return 0;
    }
    if (nums == 3) {
        if (s[leng - 3] > '2' || s[leng - 3] == '2' && s[leng - 2] > '5' || s[leng - 3] == '2' && s[leng - 2] == '5' && s[leng - 1] > '5') {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
    return 0;
}