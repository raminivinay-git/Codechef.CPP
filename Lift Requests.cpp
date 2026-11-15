#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        
        long long total_floors = 0;
        int current = 0;
        
        for (int i = 0; i < q; i++) {
            int f, d;
            cin >> f >> d;
            
            total_floors += abs(current - f);
            total_floors += abs(f - d);
            current = d;
        }
        
        cout << total_floors << "\n";
    }
    return 0;
}
