#include <iostream>

using namespace std;

void solve() {
    int t;
    if (!(cin >> t)) return;
    while (t--) {
        int n, x;
        cin >> n >> x;
        long long sum = 0;
        for (int i = 0; i < n - 1; i++) {
            int a;
            cin >> a;
            sum += a;
        }
        long long requiredSum = (long long)n * x;
        long long remaining = requiredSum - sum;
        if (remaining < 0) {
            remaining = 0;
        }
        cout << remaining << "\n";
    }
}

int main() {
    solve();
    return 0;
}
