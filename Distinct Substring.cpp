#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        long long min_length = (k * (k + 1)) / 2 + (k - 1);
        
        if (n >= min_length) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
