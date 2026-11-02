#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            int w[200005];
            
            for (int i = 0; i < n; i++) {
                cin >> w[i];
            }
            
            sort(w, w + n);
            
            long long max_weight = 0;
            for (int i = 0; i < n; i++) {
                long long current_weight = 1LL * w[i] * (n - i);
                if (current_weight > max_weight) {
                    max_weight = current_weight;
                }
            }
            
            cout << max_weight << "\n";
        }
    }
    return 0;
}
