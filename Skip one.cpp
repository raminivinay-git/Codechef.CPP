#include <iostream>

using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            long long k;
            cin >> n >> k;
            
            long long sum = 0, mx = 0;
            int ans = 0;
            bool possible = true;
            
            for (int i = 0; i < n; i++) {
                long long a;
                cin >> a;
                
                if (possible) {
                    sum += a;
                    if (a > mx) mx = a;
                    
                    if (sum - mx <= k) {
                        ans = i + 1;
                    } else {
                        possible = false;
                    }
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
