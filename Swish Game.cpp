#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            int m, k;
            cin >> m >> k;
            string s;
            cin >> s;
            
            int c = 0;
            for (char ch : s) {
                if (ch == 'S') {
                    c++;
                }
            }
            
            if (c >= k) {
                cout << m << "\n";
            } else {
                cout << m + k - c - 1 << "\n";
            }
        }
    }
    return 0;
}
