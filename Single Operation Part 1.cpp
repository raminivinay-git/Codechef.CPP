#include <iostream>
#include <string>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int y = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                y++;
            } else {
                break;
            }
        }
        
        cout << y << "\n";
    }
    return 0;
}
