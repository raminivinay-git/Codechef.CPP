#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            int pies[35];
            int racks[35];
            
            for (int i = 0; i < n; i++) cin >> pies[i];
            for (int i = 0; i < n; i++) cin >> racks[i];
            
            sort(pies, pies + n);
            sort(racks, racks + n);
            
            int p = 0, r = 0, count = 0;
            while (p < n && r < n) {
                if (pies[p] <= racks[r]) {
                    count++;
                    p++;
                }
                r++;
            }
            cout << count << "\n";
        }
    }
    return 0;
}
