#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long H, X, Y1, Y2, K;
    cin >> H >> X >> Y1 >> Y2 >> K;
    
    // Option 1: Use only the gun
    long long hits_gun = (H + X - 1) / X;
    
    // Option 2: Use the laser
    long long hits_laser = 0;
    if (H <= K * Y1) {
        hits_laser = (H + Y1 - 1) / Y1;
    } else {
        long long remaining_health = H - K * Y1;
        long long extra_hits = (remaining_health + Y2 - 1) / Y2;
        hits_laser = K + extra_hits;
    }
    
    cout << min(hits_gun, hits_laser) << "\n";
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
