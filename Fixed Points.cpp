#include <iostream>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    if (k == n - 1) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
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
