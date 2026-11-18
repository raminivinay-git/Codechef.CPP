#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n <= 4) {
            cout << 0 << " " << n << '\n';
        } else {
            cout << 1 << " " << n - 1 << '\n';
        }
    }
    return 0;
}
