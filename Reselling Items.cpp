#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        long long profit = 0;
        for (int i = 0; i < n; i++) {
            int cost = (i < k) ? 5 : 10;
            int cur_profit = a[i] - cost;
            if (cur_profit > 0) {
                profit += cur_profit;
            }
        }
        cout << profit << "\n";
    }
    return 0;
}
