#include <iostream>

using namespace std;

int a[105][105];

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    
    int max_trace = 0;
    
    for (int r = 0; r < n; ++r) {
        int sum = 0;
        for (int i = 0; r + i < n; ++i) {
            sum += a[r + i][i];
        }
        if (sum > max_trace) {
            max_trace = sum;
        }
    }
    
    for (int c = 1; c < n; ++c) {
        int sum = 0;
        for (int i = 0; c + i < n; ++i) {
            sum += a[i][c + i];
        }
        if (sum > max_trace) {
            max_trace = sum;
        }
    }
    
    cout << max_trace << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
