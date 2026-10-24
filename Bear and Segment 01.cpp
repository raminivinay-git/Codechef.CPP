#include <iostream>
#include <string>

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int first_one = -1;
    int last_one = -1;
    
    // Find the first and last occurrence of '1'
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            if (first_one == -1) {
                first_one = i;
            }
            last_one = i;
        }
    }
    
    // If there is no '1' in the string
    if (first_one == -1) {
        cout << "NO\n";
        return;
    }
    
    // Check if there are any '0's between the first and last '1'
    for (int i = first_one; i <= last_one; i++) {
        if (s[i] == '0') {
            cout << "NO\n";
            return;
        }
    }
    
    cout << "YES\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
