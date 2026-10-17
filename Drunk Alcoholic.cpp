#include <iostream>

using namespace std;

void solve() {
    int k;
    cin >> k;
    if (k % 2 == 0) {
        cout << (k / 2) * 2 << "\n";
    } else {
        cout << ((k / 2) * 2) + 3 << "\n";
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
