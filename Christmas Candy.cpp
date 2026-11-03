#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a;
        cin >> n;
        int max_val = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a < max_val) {
                ans++;
            } else {
                max_val = a;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
