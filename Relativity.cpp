#include <iostream>

using namespace std;

void solve() {
    long long g, c;
    cin >> g >> c;
    cout << (c * c) / (2 * g) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
