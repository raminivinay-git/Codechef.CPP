#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        long long mx = max(x, y);
        long long ans = 2 * mx - 1;
        cout << ans << "\n";
    }
    return 0;
}
