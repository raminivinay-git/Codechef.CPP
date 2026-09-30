#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        long long sushil = a[n - 1];
        int pos = n;
        
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] <= sushil / 2) {
                pos--;
            } else {
                break;
            }
        }
        
        cout << pos << "\n";
    }
    
    return 0;
}
