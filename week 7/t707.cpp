#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string s;
void permutations(string a) {
	cout << a << endl;
	if (next_permutation(a.begin(), a.end())) permutations(a);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> s;
	sort(s.begin(), s.end());
	permutations(s);
	return 0;
}