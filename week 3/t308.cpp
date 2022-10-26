#include<iostream> 
using namespace std;

int n;

int main() {
    cin >> n;
    if (n < 2016) {
        if ((4 + (2015 - n) / 4 + (2015 - n)) % 7 == 0) cout << 7;
        else cout << (4 + (2015 - n) / 4 + (2015 - n)) % 7;
    }

    else if (n > 2016) {
        if ((n - 2016 + (n - 2016) / 4) % 7 == 1) cout << 1;
        else if ((n - 2016 + (n - 2016) / 4) % 7 == 0) cout << 2;
        else cout << 10 - (n - 2016 + (n - 2016) / 4) % 7 - 1;
    }
    
    else cout << 2;
    return 0;
}