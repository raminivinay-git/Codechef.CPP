#include <iostream>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    int max_ones = (n + 1) / 2;
    int min_ones = n / 2;
    
    if (k >= min_ones && k <= max_ones) {
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
