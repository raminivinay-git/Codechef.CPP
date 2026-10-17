#include <iostream>

using namespace std;

void solve() {
    long long n, x;
    cin >> n >> x;
    cout << 2 * n + 1 - x << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
