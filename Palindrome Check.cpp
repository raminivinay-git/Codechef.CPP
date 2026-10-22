#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b;
    for (int x : a) {
        if (x != k) {
            b.push_back(x);
        }
    }
    
    int m = b.size();
    bool possible = true;
    for (int i = 0; i < m / 2; i++) {
        if (b[i] != b[m - 1 - i]) {
            possible = false;
            break;
        }
    }
    
    if (possible) {
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
