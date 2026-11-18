#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string m;
    cin >> t >> m;
    
    while (t--) {
        string s;
        cin >> s;
        for (char c : s) {
            if (c == '_') {
                cout << ' ';
            } else if (c >= 'a' && c <= 'z') {
                cout << m[c - 'a'];
            } else if (c >= 'A' && c <= 'Z') {
                cout << (char)toupper(m[c - 'A']);
            } else {
                cout << c;
            }
        }
        cout << '\n';
    }
    return 0;
}
