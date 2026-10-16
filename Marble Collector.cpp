#include <iostream>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int count[105] = {0};
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        count[a] = 1;
    }
    int collected = 0;
    for (int i = 1; i <= m; i++) {
        if (count[i]) {
            collected++;
        }
    }
    cout << m - collected << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
