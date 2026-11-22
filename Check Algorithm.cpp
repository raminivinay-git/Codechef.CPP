#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        int comp_len = 0;
        int i = 0;
        while (i < n) {
            int count = 0;
            char c = s[i];
            while (i < n && s[i] == c) {
                count++;
                i++;
            }
            comp_len += 1 + to_string(count).length();
        }
        if (comp_len < n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
