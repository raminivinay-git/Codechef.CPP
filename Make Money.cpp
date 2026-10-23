#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, c;
        cin >> n >> x >> c;
        
        int total = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            total += max(x - c, a);
        }
        
        cout << total << "\n";
    }
    return 0;
}
