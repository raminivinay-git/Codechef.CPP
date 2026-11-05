#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s;
    cin >> n >> s;
    
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    vector<int> type(n);
    for (int i = 0; i < n; i++) {
        cin >> type[i];
    }
    
    int min_defender = 1e9;
    int min_forward = 1e9;
    
    for (int i = 0; i < n; i++) {
        if (type[i] == 0) { // Defender
            min_defender = min(min_defender, p[i]);
        } else { // Forward
            min_forward = min(min_forward, p[i]);
        }
    }
    
    if (s + min_defender + min_forward <= 100) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }
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
