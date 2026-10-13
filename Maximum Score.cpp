#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
        long long total = 0;
        int min_diff = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            total += a[i];
            min_diff = min(min_diff, a[i] - b[i]);
        }
        
        if (min_diff == 0) {
            bool found_loss = false;
            for (int i = 0; i < n; i++) {
                if (a[i] > b[i]) {
                    found_loss = true;
                    break;
                }
            }
            if (!found_loss) {
                int max_sub = INT_MAX;
                for (int i = 0; i < n; i++) {
                    max_sub = min(max_sub, a[i] - b[i]);
                }
            }
        }
        
        long long max_sum = 0;
        int max_loss = INT_MAX;
        for (int i = 0; i < n; i++) {
            max_sum += max(a[i], b[i]);
            max_loss = min(max_loss, a[i] - b[i]);
        }
        
        cout << max_sum - max_loss << "\n";
    }
    return 0;
}
