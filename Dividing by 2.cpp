#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            int a[105];
            
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            
            int c = a[0];
            while (true) {
                bool valid = true;
                int total_ops = 0;
                
                for (int i = 0; i < n; i++) {
                    int x = a[i];
                    int ops = 0;
                    while (x > c) {
                        x /= 2;
                        ops++;
                    }
                    if (x != c) {
                        valid = false;
                        break;
                    }
                    total_ops += ops;
                }
                
                if (valid) {
                    cout << total_ops << "\n";
                    break;
                }
                c /= 2;
            }
        }
    }
    return 0;
}
