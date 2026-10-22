#include <iostream>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> counts;
    bool possible = true;
    for (int i = 0; i < 2 * n; i++) {
        int a;
        cin >> a;
        counts[a]++;
        if (counts[a] > 2) {
            possible = false;
        }
    }
    
    if (possible) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
