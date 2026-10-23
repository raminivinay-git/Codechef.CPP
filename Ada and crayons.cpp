#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        int u = 0, d = 0;
        if (s[0] == 'U') {
            u++;
        } else {
            d++;
        }
        
        for (int i = 1; i < s.length(); i++) {
            if (s[i] != s[i - 1]) {
                if (s[i] == 'U') {
                    u++;
                } else {
                    d++;
                }
            }
        }
        
        cout << min(u, d) << "\n";
    }
    return 0;
}
