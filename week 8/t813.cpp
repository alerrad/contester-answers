#include <iostream>

using namespace std;

char q, w, e;
int n = -1, m = -1, a = -1, s = -1;

int main() {
    cin >> n >> q >> m >> w >> a >> e >> s;
    if(q != '.' || w != '.' || e != '.') cout << 0;
    else if (n <= 255 && m <= 255 && a <= 255 && s <= 255 && n >= 0 && m >= 0 && a >= 0 && s >= 0) {
        cout << 1;
    }
    else cout << 0;
    return 0;
}