#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> count(4, 0);
    long long sum = 0;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += a;
        count[a % 4]++;
    }

    if (sum % 4 != 0) {
        cout << -1 << "\n";
        return;
    }

    int steps = 0;
    
    int pairs_13 = min(count[1], count[3]);
    steps += pairs_13;
    
    count[1] -= pairs_13;
    count[3] -= pairs_13;
    
    int leftovers = count[1] > 0 ? count[1] : count[3];
    steps += leftovers / 2;
    count[2] += leftovers / 2;
    
    steps += count[2] / 2;
    
    cout << steps << "\n";
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
