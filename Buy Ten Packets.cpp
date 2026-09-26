#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        int cost1 = 5 * x;
        int cost2 = 2 * y + x;
        int cost3 = 3 * y;
        int ans = min(cost1, min(cost2, cost3));
        cout << ans << "\n";
    }
    return 0;
}
