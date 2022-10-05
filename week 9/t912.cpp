#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string s;
double words = 0, len = 0, tmp = 0;
bool ebay = false;

int main() {
    getline(cin, s);

    for (int i = 0; i < s.size(); ++i) {
        if (isalpha(s[i])) {
            tmp++;
            ebay = true;
        }
        else {
            len += tmp;
            tmp = 0;
            words += ebay;
            ebay = false;
        }
    }
    double avg = len / words;
    cout << setprecision(10) << avg;
    return 0;
}