#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    long long n, m, x;
    cin >> n >> m >> x;

    long long row = (x + m - 1) / m;
    
    long long from_front = row;
    long long from_back = n - row + 1;
    
    cout << min(from_front, from_back) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
