#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

const int N = 100;
int n;
char location[N];
struct Train {
    int id;
    char location[N];
    char tm[N];
};
vector <Train> arr;

int main() {
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Train tmp;
        cin >> tmp.id >> tmp.location >> tmp.tm;
        arr.push_back(tmp);
    }
    cin >> location;

    for (int i = 0; i < n; ++i) {
        if (strlen(location) == strlen(arr[i].location)) {
            bool t = true;
            string fin;
            fin = arr[i].location;
            int q = strlen(arr[i].location);
            for (int j = 0; j < q; ++j) {
                if (fin[j] != location[j] - 32 && fin[j] != location[j] + 32 && fin[j] != location[j]) {
                    t = false;
                    break;
                }
            }
            if (t) {
                cout << arr[i].id << '_';
                for (int j = 0; j < fin.size(); ++j) {
                    if (fin[j] >= 'a' && fin[j] <= 'z') fin[j] -= 32;
                }
                cout << fin << '_' << arr[i].tm;
                return 0;
            }
        }
    }

    cout << "Impossible";
    return 0;
}