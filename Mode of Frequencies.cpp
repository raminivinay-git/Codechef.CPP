#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            freq[a]++;
        }
        
        map<int, int> freq_count;
        for (auto x : freq) {
            freq_count[x.second]++;
        }
        
        int max_c = 0;
        int ans = 100005;
        for (auto x : freq_count) {
            if (x.second > max_c) {
                max_c = x.second;
                ans = x.first;
            } else if (x.second == max_c && x.first < ans) {
                ans = x.first;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
