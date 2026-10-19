#include <iostream>

using namespace std;

void solve() {
    char first, second, third;
    char x, y;
    cin >> first >> second >> third;
    cin >> x >> y;
    
    if (first == x || first == y) {
        cout << first << "\n";
    } else if (second == x || second == y) {
        cout << second << "\n";
    } else {
        cout << third << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
