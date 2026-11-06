#include <iostream>
#include <vector>

using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    // 2^32 - 1
    long long max_val = 4294967295LL; 
    
    long long k = max_val / (n + 1);
    long long r = max_val % (n + 1);
    
    // Output one 'k' first, so the correct minimum is at 1-based index 1
    cout << k << " ";
    
    // Output 'r' elements of 'k+1'. 
    // The buggy code will wrap around to 0 on the first one (index 2).
    for (int i = 0; i < r; ++i) {
        cout << k + 1 << " ";
    }
    
    // Fill the remaining array with 'k'
    for (int i = 0; i < n - 1 - r; ++i) {
        cout << k << " ";
    }
    cout << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
