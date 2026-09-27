#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 1e9;
        for (int m = max(1, n - 10); m <= n + 10; ++m) {
            bool div2 = (m % 2 == 0);
            bool div5 = (m % 5 == 0);
            if (div2 != div5) {
                int diff = n - m;
                if (diff < 0) diff = -diff;
                if (diff < ans) {
                    ans = diff;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
