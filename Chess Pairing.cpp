#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    int unrated = 2 * n - x;
    if (x <= unrated) {
        cout << 0 << "\n";
    } else {
        cout << (x - unrated) << "\n";
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
