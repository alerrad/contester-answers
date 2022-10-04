#include <iostream>

using namespace std;

int h1, m1, s1, h2, m2, s2;

int in_seconds(int h, int m, int s) {
    return (h * 3600 + m * 60 + s);
}

int main() {
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    
    int tm1 = in_seconds(h1, m1, s1);
    int tm2 = in_seconds(h2, m2, s2);
    
    int between = tm2 - tm1;
    int hours = between / 3600;
    int minutes = between % 3600 / 60;
    int seconds = between % 3600 % 60;

    if (hours < 10) cout << '0';
    cout << hours << ':';
    if (minutes < 10) cout << '0';
    cout << minutes << ':';
    if (seconds < 10) cout << '0';
    cout << seconds;
    return 0;
}