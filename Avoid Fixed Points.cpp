#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            long long a;
            cin >> a;
            if (a == i + 1 + ans) {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
