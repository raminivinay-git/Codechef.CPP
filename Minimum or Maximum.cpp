#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int b, mn, mx;
        cin >> b;
        mn = mx = b;
        
        bool possible = true;
        for (int i = 1; i < n; i++) {
            cin >> b;
            if (b < mn) {
                mn = b;
            } else if (b > mx) {
                mx = b;
            } else if (b != mn && b != mx) {
                possible = false;
            }
        }
        
        if (possible) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
