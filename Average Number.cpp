#include <iostream>

using namespace std;

void solve() {
    int n, k, v;
    cin >> n >> k >> v;
    
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        sum += a;
    }
    
    long long total_sum = (long long)v * (n + k);
    long long diff = total_sum - sum;
    
    if (diff > 0 && diff % k == 0) {
        cout << diff / k << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
