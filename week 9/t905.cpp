#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 1001;
char s[N], res[N];

string removeDublicates(char *text) {
    vector <string> words;
    vector <string>* ptrWords = &words;
    string tmp = "";
    for (int i = 0; i < strlen(text); ++i) {
        if (*(text + i) == ' ') {
            if (find(ptrWords->begin(), ptrWords->end(), tmp) == ptrWords->end()) {
                ptrWords->push_back(tmp);
            }
            tmp.clear();
        }
        else tmp += *(text + i);
    }
    tmp.clear();
    for (int i = 0; i < ptrWords->size(); ++i) tmp += ptrWords->at(i) + " ";
    return tmp;
}

int main() {
    cin.getline(s, N);
    s[strlen(s)] = ' ';
    string res = removeDublicates(s);
    cout << res;
    return 0;
}