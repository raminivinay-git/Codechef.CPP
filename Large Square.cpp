#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    int n, a;
    cin >> n >> a;
    
    // The number of smaller squares along the side of the largest possible mega square
    int side_multiplier = sqrt(n);
    
    // The side length of the mega square
    cout << side_multiplier * a << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
