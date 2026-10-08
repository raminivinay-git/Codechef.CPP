#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, x, y;
        cin >> h >> x >> y;
        int ans = 1 + max(0, (h - y + x - 1) / x);
        cout << ans << "\n";
    }
    return 0;
}
