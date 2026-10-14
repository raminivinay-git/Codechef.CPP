#include <iostream>

using namespace std;

void solve() {
    int t;
    if (!(cin >> t)) return;
    while (t--) {
        int xa, xb, Xa, Xb;
        cin >> xa >> xb >> Xa >> Xb;
        int ans = (Xa / xa) + (Xb / xb);
        cout << ans << "\n";
    }
}

int main() {
    solve();
    return 0;
}
