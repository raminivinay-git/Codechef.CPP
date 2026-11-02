#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            string s;
            cin >> s;
            
            int count0 = 0, count1 = 0;
            for (char c : s) {
                if (c == '0') count0++;
                else count1++;
            }
            
            if (count0 == 1 || count1 == 1) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
    return 0;
}
