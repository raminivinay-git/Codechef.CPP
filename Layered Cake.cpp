#include <iostream>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int a[105], b[105];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (b[j] < a[i]) {
                count++;
            }
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
