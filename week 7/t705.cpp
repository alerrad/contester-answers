#include <iostream>
#include <vector>

#define pb push_back
#define pp pop_back

using namespace std;

int n, k;
vector<int> q;

// By T. Mukhamedzhan
void rec(int x) {
    if(q.size() == n) {
        for(int i = 0; i < q.size(); ++i) cout << q[i] << ' ';
        cout << endl;
        return;
    }
    for(int i = x; i <= k; ++i) {
        q.pb(i);
        rec(x);
        q.pp();
    }
}

int main() {
    cin >> n >> k;
    rec(1);
    return 0;
}