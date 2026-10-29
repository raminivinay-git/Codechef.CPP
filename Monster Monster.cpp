#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        sort(arr, arr + n);
        
        long long ans = 0;
        long long days = 0;
        
        for (int i = n - 1; i >= 0; i--) {
            long long current_hp = arr[i] + days * x;
            if (current_hp > ans) {
                ans = current_hp;
            }
            days++;
        }
        
        cout << ans << "\n";
    }
    return 0;
}
