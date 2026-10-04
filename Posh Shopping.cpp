#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int max_spent = 0;
        for (int i = 0; i < n; i++) {
            max_spent = max(max_spent, a[i]);
            for (int j = i + 1; j < n; j++) {
                if (a[j] >= a[i]) {
                    max_spent = max(max_spent, a[i] + a[j]);
                }
            }
        }
        cout << max_spent << "\n";
    }
    return 0;
}
