#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
struct Student {
	int id;
	double grade;
};
vector <Student> arr;
vector <Student> *arr2 = &arr;

bool cmp(Student A, Student B) {
	if (A.grade > B.grade) return true;
	else if (A.grade < B.grade) return false;
	return (A.id < B.id);
}

int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		Student tmp;
		cin >> tmp.id >> tmp.grade;
		arr2->push_back(tmp);
	}
	
	sort(arr2->begin(), arr2->end(), &cmp);

	for (int i = 0; i < arr.size(); ++i) {
		cout << arr2->at(i).id << ' ' << arr2->at(i).grade << endl;
	}
	return 0;
}