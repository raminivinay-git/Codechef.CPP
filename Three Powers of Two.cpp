#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int count1 = 0;
        for (char c : s) {
            if (c == '1') {
                count1++;
            }
        }
        
        if (s == "1" || s == "10") {
            cout << "NO\n";
        } else if (count1 <= 3) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
