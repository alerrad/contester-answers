#include <iostream>
#include <string>
#include <vector>

using namespace std;

double mx = -9999;
int n, mxi = 0;
struct Student {
	int id;
	string name;
	double grade;
};
vector <Student> arr;

int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		Student tmp;
		cin >> tmp.id >> tmp.name >> tmp.grade;
		if (tmp.grade > mx) {
			mx = tmp.grade;
			mxi = i;
		}
		arr.push_back(tmp);
	}
	cout << arr[mxi].id << ' ' << arr[mxi].name << ' ' << arr[mxi].grade;
	return 0;
}