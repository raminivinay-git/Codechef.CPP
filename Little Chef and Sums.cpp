#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int min_val = INT_MAX;
        int min_idx = -1;
        
        for (int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            if (a < min_val) {
                min_val = a;
                min_idx = i;
            }
        }
        
        cout << min_idx << '\n';
    }
    return 0;
}
