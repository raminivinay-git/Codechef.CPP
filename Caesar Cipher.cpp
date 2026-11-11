#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        string s, t, u;
        cin >> s >> t >> u;
        
        int k = (t[0] - s[0] + 26) % 26;
        for (char c : u) {
            cout << (char)('a' + (c - 'a' + k) % 26);
        }
        cout << "\n";
    }
    return 0;
}
