#include <iostream>
#include <cstring>

using namespace std;

int n;
const int N = 1001;
struct Train {
    int id;
    char destination[N];
    char time[N];
};

void upperize(char* s) {
    for (int i = 0; i < strlen(s); ++i) {
        *(s + i) = toupper(*(s + i));
    }
}

int main() {
    cin >> n;
    char destination[N];
    Train* TRAIN = new Train[n];
    for (int i = 0; i < n; i++) {
        cin >> TRAIN[i].id >> TRAIN[i].destination >> TRAIN[i].time;
        upperize(TRAIN[i].destination);
    }
    cin >> destination;
    upperize(destination);

    for (int i = 0; i < n; ++i) {
        if (!strcmp(TRAIN[i].destination, destination)) {
            cout << TRAIN[i].id << ' ' << TRAIN[i].destination << ' ' << TRAIN[i].time;
            return 0;
        }
    }
    
    cout << "Impossible";
    return 0;
}