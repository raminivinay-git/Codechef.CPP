#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    long long ans = 1;
    long long MOD = 1e9 + 7;
    
    for (char ch : s) {
        // If the character is equidistant to two vowels, we have 2 choices
        if (ch == 'c' || ch == 'g' || ch == 'l' || ch == 'r') {
            ans = (ans * 2) % MOD;
        }
    }
    
    cout << ans << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
