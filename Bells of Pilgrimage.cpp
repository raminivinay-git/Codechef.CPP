#include <iostream>

using namespace std;

void solve() {
    long long n, x, k, p;
    cin >> n >> x >> k >> p;
    
    long long mana = p;
    if (k <= x) {
        mana += k * 10;
    } else {
        mana += x * 10 + (k - x) * 5;
    }
    
    if (k == n) {
        mana += 20;
    }
    
    cout << mana << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
