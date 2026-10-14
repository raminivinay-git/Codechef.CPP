#include <iostream>

using namespace std;

void solve() {
    int t;
    if (!(cin >> t)) return;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        if (x == y) {
            cout << 0 << "\n";
        } else if (x > y) {
            long long diff = x - y;
            if (diff % 2 == 0) {
                cout << diff / 2 << "\n";
            } else {
                cout << (diff / 2) + 2 << "\n";
            }
        } else {
            long long diff = y - x;
            cout << diff << "\n";
        }
    }
}

int main() {
    solve();
    return 0;
}
