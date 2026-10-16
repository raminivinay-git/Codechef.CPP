#include <iostream>
using namespace std;

void solve() {
    int r;
    cin >> r;
    if (r >= 2000) {
        cout << 1 << "\n";
    } else if (r >= 1600) {
        cout << 2 << "\n";
    } else {
        cout << 3 << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
