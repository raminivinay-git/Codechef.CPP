#include <bits/stdc++.h>
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
        
        string ans = "";
        for (int i = 0; i < n; i += 2) {
            string sub = s.substr(i, 2);
            if (sub == "00") ans += 'A';
            else if (sub == "01") ans += 'T';
            else if (sub == "10") ans += 'C';
            else if (sub == "11") ans += 'G';
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
