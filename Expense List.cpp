#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        long long income = 1LL << x;
        
        for (int i = 0; i < n; i++) {
            income /= 2;
        }
        
        cout << income << "\n";
    }
    
    return 0;
}
