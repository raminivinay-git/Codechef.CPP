#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int min_diff = INT_MAX;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                int perimeter = 2 * (i + j);
                min_diff = min(min_diff, abs(perimeter - k));
            }
        }
        cout << min_diff << "\n";
    }
    return 0;
}
