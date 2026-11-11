#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        set<string> codes;
        for (int i = 0; i < s.length() - 1; i++) {
            codes.insert(s.substr(i, 2));
        }
        
        cout << codes.size() << "\n";
    }
    return 0;
}
