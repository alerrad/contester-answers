#include <iostream>

using namespace std;

char arr[8][8];
int black = 0, white = 0, red = 0, green = 0;

int main() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cin >> arr[i][j];
            if (arr[i][j] == '0') black++;
            else if (arr[i][j] == '1') white++;
            else if (arr[i][j] == '2') red++;
            else green++;
        }
    }
    if (!black || !white || !red || !green) {
        cout << "BAD INPUT LIST";
        return 0;
    }
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (arr[i][j] == '2') cout << '2';
            else cout << '-';
        }
        cout << endl;
    }
    cout << black << ' ' << white << ' ' << red << ' ' << green;
    return 0;
}