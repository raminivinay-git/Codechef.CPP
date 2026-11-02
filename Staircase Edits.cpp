#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            long long b[200005];
            
            for (int i = 0; i < n; i++) {
                long long a;
                cin >> a;
                b[i] = a - i;
            }
            
            sort(b, b + n);
            
            int max_freq = 0;
            int current_freq = 1;
            
            for (int i = 1; i < n; i++) {
                if (b[i] == b[i - 1]) {
                    current_freq++;
                } else {
                    if (current_freq > max_freq) {
                        max_freq = current_freq;
                    }
                    current_freq = 1;
                }
            }
            if (current_freq > max_freq) {
                max_freq = current_freq;
            }
            
            cout << n - max_freq << "\n";
        }
    }
    return 0;
}
