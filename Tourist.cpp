#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int min_dist = 1e9;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            int dist = abs(a - x) + abs(b - y);
            min_dist = min(min_dist, dist);
        }
        cout << min_dist << "\n";
    }
    return 0;
}
