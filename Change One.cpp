#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[105];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    
    if (n <= 2) {
        cout << 0 << "\n";
        return;
    }
    
    int ans = arr[n - 1] - arr[0];
    
    ans = min(ans, arr[n - 2] - arr[0]);
    ans = min(ans, arr[n - 1] - arr[1]);
    
    for(int i = 1; i < n - 1; i++) {
        ans = min(ans, arr[n - 1] - arr[0]);
    }
    
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
