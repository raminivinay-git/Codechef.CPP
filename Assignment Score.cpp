#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            sum += a;
        }
        
        int required_total = 50 * (n + 1);
        int needed = required_total - sum;
        
        if (needed > 100) {
            cout << -1 << "\n";
        } else if (needed < 0) {
            cout << 0 << "\n";
        } else {
            cout << needed << "\n";
        }
    }
    return 0;
}
