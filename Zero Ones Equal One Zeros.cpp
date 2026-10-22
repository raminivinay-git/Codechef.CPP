#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n % 2 == 1) {
        int m = n / 2;
        string s = "";
        for (int i = 0; i < m; i++) s += "0";
        s += "1";
        for (int i = 0; i < m; i++) s += "0";
        cout << s << "\n";
    } else {
        string s = "1";
        for (int i = 0; i < n - 2; i++) {
            s += "0";
        }
        s += "1";
        cout << s << "\n";
    }
}

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
