#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    
    // Extract the left and right halves
    string left = s.substr(0, n / 2);
    string right = s.substr((n + 1) / 2);
    
    // Sort both halves to compare their character frequencies
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());
    
    if (left == right) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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
