#include <iostream>
#include <vector>
#include <cstring>
// TOO EZ
using namespace std;

const int N = 1000;
char s[N], res[N];

void mostRecent(char *text, char *word) {
    vector <string> words;
    vector <string>* ptrWords = &words; // pointer to vector
    string tmp; // Separating and storing each word
    for (int i = 0; i < strlen(text); ++i) {
        if (*(text + i) == ' ') {
            ptrWords->push_back(tmp);
            tmp.clear();
        }
        else tmp += toupper(*(text + i));
    }
    ptrWords->push_back(tmp);
    tmp.clear();
    int max_cnt = 0; // Searching for max occuring word
    for (int i = 0; i < ptrWords->size(); ++i) {
        int cnt = 0;
        for (int j = 0; j < words.size(); ++j) cnt += (ptrWords->at(i) == ptrWords->at(j));
        if (cnt > max_cnt) {
            max_cnt = cnt;
            tmp = ptrWords->at(i);
        }
    }
    // Saving answer
    for (int i = 0; i < tmp.size(); ++i) *(word + i) = tmp[i];
}

int main() {
    cin.getline(s, N);
    mostRecent(s, res);
    cout << res;
    return 0;
}