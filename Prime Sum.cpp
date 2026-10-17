#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    long long count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) count1++;
        else if (x == 2) count2++;
        else if (x == 3) count3++;
    }
    
    long long ans = 0;
    ans += count1 * count2; // 1 + 2 = 3 (prime)
    ans += count2 * count3; // 2 + 3 = 5 (prime)
    ans += count1 * (count1 - 1) / 2; // 1 + 1 = 2 (prime)
    
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
