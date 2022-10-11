#include <iostream>
#include <cstring>

using namespace std;

string vowels = "aoyeui";
char s[100];

int main() {
    cin >> s;

    for (int i = 0; i < strlen(s); ++i) {
        char letter = tolower(s[i]);
        if (vowels.find(letter) == string::npos) {
            cout << '.' << letter;
        }
    }

    return 0;
}