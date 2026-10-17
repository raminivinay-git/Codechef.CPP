#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[105];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    
    if (a[0] == a[n - 1]) {
        cout << "YES\n";
        return;
    }
    
    int min_val = a[0];
    int count_min = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == min_val) {
            count_min++;
        }
    }
    
    if (count_min >= 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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
