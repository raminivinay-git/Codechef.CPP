#include <iostream>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long max_diff = (n / 2) * 3;
    cout << max_diff << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
