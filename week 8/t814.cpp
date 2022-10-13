#include <iostream>
#include <string>

using namespace std;

string dirc;
int steps, x = 0, y = 0;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	while (cin >> dirc >> steps) {
		if (dirc == "North") y += steps;
		else if (dirc == "South") y -= steps;
		else if (dirc == "East") x += steps;
		else if (dirc == "West") x -= steps;
	}

	cout << x << ' ' << y;
	return 0;
}