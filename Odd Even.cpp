#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int odd = 0, even = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) even++;
        else odd++;
    }
    
    if (odd == even) {
        cout << 2 * odd << "\n";
    } else if (odd > even) {
        cout << 2 * even + 1 << "\n";
    } else {
        cout << 2 * odd + 1 << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
