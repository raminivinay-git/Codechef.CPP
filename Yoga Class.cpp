#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    
    int ans = 0;
    if (y > 2 * x) {
        ans = (n / 2) * y + (n % 2) * x;
    } else {
        ans = n * x;
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
