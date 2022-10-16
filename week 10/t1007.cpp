#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n, m;
struct Student {
    int id;
    string name;
    string surname;
    int subj1;
    int subj2;
    int subj3;
    int subj4;
    string special;
};

Student arr[1001];

int total_points(Student A) {
    return A.subj1 + A.subj2 + A.subj3 + A.subj4;
}

bool cmp(Student A, Student B) {
    if (total_points(A) > total_points(B)) return true;
    else if (total_points(A) < total_points(B)) return false;
    if (A.special == "YES" && B.special == "NO") return true;
    if (A.subj4 > B.subj4) return true;
    return false;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i) cin >> arr[i].id >> arr[i].name >> arr[i].surname >> arr[i].subj1 >> arr[i].subj2 >> arr[i].subj3 >> arr[i].subj4 >> arr[i].special;
    sort(arr, arr + n, &cmp);
    for (int i = 0; i < m; ++i) cout << arr[i].id << ' ' << arr[i].name << ' ' << arr[i].surname << ' ' << total_points(arr[i]) << endl;
    return 0;
}