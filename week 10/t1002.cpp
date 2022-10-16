#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n, ind = -1;
string min_time = "99:99", dest;
struct Train {
	int id;
	string dest;
	string tm;
};
vector <Train> arr;

string upperCase(string s) {
	string res = "";
	for (int j = 0; j < s.length(); ++j) {
		char l = toupper(s[j]);
		res.push_back(l);
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		Train tmp;
		cin >> tmp.id >> tmp.dest >> tmp.tm;
		tmp.dest = upperCase(tmp.dest);
		arr.push_back(tmp);
	}
	cin >> dest;
	dest = upperCase(dest);

	for (int i = 0; i < n; ++i) {
		if (arr[i].dest == dest && arr[i].tm < min_time) {
            min_time = arr[i].tm;
            ind = i;
		}
	}
	if (ind == -1) cout << "Impossible";
	else cout << arr[ind].id << '_' << arr[ind].dest << '_' << arr[ind].tm;
	return 0;
}