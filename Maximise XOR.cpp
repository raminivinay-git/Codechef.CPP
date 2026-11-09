#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;
    int n = a.length();
    int a1 = count(a.begin(), a.end(), '1');
    int b1 = count(b.begin(), b.end(), '1');
    int ones = min(a1, n - b1) + min(n - a1, b1);
    cout << string(ones, '1') << string(n - ones, '0') << "\n";
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
