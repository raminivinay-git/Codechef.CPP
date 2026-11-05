#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, n;
    cin >> a >> b >> n;
    
    // Find the smallest multiple of a that is >= n
    long long ans;
    if (n % a == 0) {
        ans = n;
    } else {
        ans = (n / a + 1) * a;
    }
    
    // Check if it is divisible by b
    if (ans % b == 0) {
        // If it is divisible by b, we need the next multiple of a
        // Since a and b can divide the same numbers, let's find the LCM or check multiples.
        // Wait, if ans % b == 0, can we just keep adding a until it's not divisible by b?
        // But what if no such number exists? When does no such number exist?
        // If b divides a, then EVERY multiple of a is also divisible by b! In that case, output -1.
        if (a % b == 0) {
            cout << -1 << "\n";
            return;
        }
        
        while (ans % b == 0) {
            ans += a;
        }
    }
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
