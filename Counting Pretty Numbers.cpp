#include <iostream>

using namespace std;

void solve() {
    int l, r;
    cin >> l >> r;
    int count = 0;
    for (int i = l; i <= r; i++) {
        int rem = i % 10;
        if (rem == 2 || rem == 3 || rem == 9) {
            count++;
        }
    }
    cout << count << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
