#include <iostream>
#include <cmath>

using namespace std;

int n, p1, p2, p3;
double min_perimeter = 999999;
struct Point {
    double x;
    double y;
};
Point arr[50];

double distance(Point A, Point B) {
    return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

double perimeter(Point A, Point B, Point C) {
    double res = 0;
    res += distance(A, B);
    res += distance(A, C);
    res += distance(B, C);
    return res;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; ++i) cin >> arr[i].x >> arr[i].y;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if (i != j && j != k && i != k) {
                    if (perimeter(arr[i], arr[j], arr[k]) < min_perimeter) {
                        min_perimeter = perimeter(arr[i], arr[j], arr[k]);
                        p1 = i + 1, p2 = j + 1, p3 = k + 1;
                    }
                }
            }
        }
    }

    cout << p1 << ' ' << p2 << ' ' << p3;
    return 0;
}