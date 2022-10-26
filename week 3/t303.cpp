#include <iostream>
#include <cmath>
using namespace std;

double a, b, c;
int main() {
    cin >> a >> b >> c;

    // 1) Find discriminant
    int disc = pow(b, 2) - 4 * a * c;

    if (disc == 0) {
        cout << (-b + sqrt(disc)) / (2 * a); // Discriminant = 0 --> only 1 root
        return 0;
    }
    
    if (disc < 0) {
        cout << "no solution";
        return 0;
    }

    // 2) Find roots
    cout << (-b + sqrt(disc)) / (2 * a) << " ";
    cout << (-b - sqrt(disc)) / (2 * a);
    return 0;
}