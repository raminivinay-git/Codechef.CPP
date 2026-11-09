#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    long long sum = 0;
    int max_p = 0;
    for (int i = 0; i < n - 1; i++) {
        int p;
        cin >> p;
        sum += p;
        if (p > max_p) {
            max_p = p;
        }
    }
    cout << sum + max_p << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
