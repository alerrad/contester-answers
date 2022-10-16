#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n;
struct Train {
    int id;
    string from;
    string to;
    string tm;
};
Train arr[1000];

bool cmp(Train A, Train B) {
    return (A.to < B.to);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> arr[i].id >> arr[i].from >> arr[i].to >> arr[i].tm;
    sort(arr, arr + n, &cmp);
    for (int i = 0; i < n; ++i) {
        cout << arr[i].id << ' ';
        for (int j = 0; j < arr[i].from.length(); ++j) {
            char l = toupper(arr[i].from[j]);
            cout << l;
        }
        cout << ' ';
        for (int j = 0; j < arr[i].to.length(); ++j) {
            char l = toupper(arr[i].to[j]);
            cout << l;
        }
        cout << ' ' << arr[i].tm << endl;
    }
    return 0;
}