#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int ans = 0;
        for (int i = 1; i < n; ++i) {
            if (s[i] == s[i - 1]) {
                ans++;
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
