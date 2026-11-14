#include <iostream>

using namespace std;

void solve() {
    int a[4];
    for (int i = 0; i < 4; ++i) {
        cin >> a[i];
    }
    
    for (int i = 1; i < 16; ++i) {
        int sum = 0;
        for (int j = 0; j < 4; ++j) {
            if (i & (1 << j)) {
                sum += a[j];
            }
        }
        if (sum == 0) {
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
