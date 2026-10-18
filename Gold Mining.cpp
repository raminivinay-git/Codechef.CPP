#include <iostream>

using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    if ((n + 1) * y >= x) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
