#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        
        int c = (s + 3) / 4;
        int total_attempts = 5 * c - s;
        
        if (total_attempts <= n) {
            cout << total_attempts << "\n";
        } else {
            cout << -1 << "\n";
        }
    }
    return 0;
}
