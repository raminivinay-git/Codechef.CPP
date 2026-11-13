#include <iostream>

using namespace std;

void solve() {
    long long n, m, k, x;
    cin >> n >> m >> k >> x;
    
    long long cycle_days = (k * n) + m;
    long long rem = x % cycle_days;
    
    if (rem == 0 || rem > (k - 1) * n) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
