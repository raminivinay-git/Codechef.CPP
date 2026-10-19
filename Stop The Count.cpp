#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int count1 = 0, count0 = 0;
    int ways = 0;
    
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            count1++;
        } else {
            count0++;
        }
        if (count1 > count0) {
            ways++;
        }
    }
    
    cout << ways << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
