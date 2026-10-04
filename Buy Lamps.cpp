#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, x, y;
        cin >> n >> k >> x >> y;
        long long red_lamps = max(0LL, k);
        long long blue_lamps = max(0LL, n - red_lamps);
        long long cost1 = red_lamps * x + blue_lamps * y;
        
        long long all_red_cost = n * x;
        
        cout << min(cost1, all_red_cost) << "\n";
    }
    return 0;
}
