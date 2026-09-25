#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        long long total_water = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            total_water += a;
        }
        long long ans = (total_water + x - 1) / x;
        cout << ans << "\n";
    }
    return 0;
}
