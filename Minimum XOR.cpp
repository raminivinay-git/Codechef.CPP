#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int total_xor = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total_xor ^= a[i];
        }
        
        int min_xor = total_xor;
        for (int i = 0; i < n; ++i) {
            min_xor = min(min_xor, total_xor ^ a[i]);
        }
        
        cout << min_xor << "\n";
    }
    
    return 0;
}
