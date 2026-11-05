#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, p, q, r;
        cin >> a >> b >> c >> p >> q >> r;
        
        int current_votes = a + b + c;
        int total_votes = p + q + r;
        int required = total_votes / 2;
        
        if (current_votes > required) {
            cout << "YES\n";
            continue;
        }
        
        int diff1 = (p - a);
        int diff2 = (q - b);
        int diff3 = (r - c);
        
        int max_gain = max({diff1, diff2, diff3});
        
        if (current_votes + max_gain > required) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
