#include <iostream>
#include <cmath>
using namespace std;

int x, y, z;

int main() {
  cin >> x >> y >> z;
  cout << pow(x, 2) + y - z / 2;
  return 0;
}