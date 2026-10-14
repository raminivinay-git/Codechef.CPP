#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    if (!(cin >> t)) return;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int maxCandies = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a % x == 0) {
                if (a > maxCandies) {
                    maxCandies = a;
                }
            }
        }
        cout << maxCandies << "\n";
    }
}

int main() {
    solve();
    return 0;
}
