#include <iostream>

using namespace std;

void solve() {
    int x, y, xr, yr, d;
    cin >> x >> y >> xr >> yr >> d;
    if (x >= xr * d && y >= yr * d) {
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
