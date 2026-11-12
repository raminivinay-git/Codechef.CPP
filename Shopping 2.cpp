#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long d;
    cin >> n >> d;
    
    vector<long long> a(n), b(n);
    long long sumA = 0, sumB = 0, sumMin = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sumA += a[i];
    }
    
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        sumB += b[i];
        sumMin += min(a[i], b[i]);
    }
    
    long long cost1 = d + sumA;
    long long cost2 = d + sumB;
    long long costBoth = 2 * d + sumMin;
    
    cout << min({cost1, cost2, costBoth}) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
