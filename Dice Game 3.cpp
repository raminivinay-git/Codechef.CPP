#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long ans = (n / 2) * 13 + (n % 2) * 6;
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
