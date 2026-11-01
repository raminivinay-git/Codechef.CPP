#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int zeros = 0, ones = 0;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        if (val == 0) {
            zeros++;
        } else {
            ones++;
        }
    }
    cout << min(zeros, ones) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
