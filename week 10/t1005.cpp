#include <iostream>
#include <string>
#include <vector>

using namespace std;

int n, m, min_i, min_j;
string name;
double mx = -9999999;
struct Luggage {
	string desc;
	int cnt;
	double weight;
};
struct Passanger {
	string name;
	int luggageSize;
	vector <Luggage> luggage;
};
vector <Passanger> passangers;

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
		vector <Luggage> tmp;
		cin >> name >> m;
		for (int j = 0; j < m; ++j) {
			Luggage tmpL;
			cin >> tmpL.desc >> tmpL.cnt >> tmpL.weight;
			tmp.push_back(tmpL);
		}
		Passanger tmp_passanger = {name, m, tmp};
		passangers.push_back(tmp_passanger);
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < passangers[i].luggageSize; ++j) {
			double tmp_weight = passangers[i].luggage[j].cnt * passangers[i].luggage[j].weight;
			if (tmp_weight > mx) {
				mx = tmp_weight;
				min_i = i;
				min_j = j;
			}
		}
	}

	cout << passangers[min_i].name << endl;
	cout << passangers[min_i].luggage[min_j].desc;
	return 0;
}