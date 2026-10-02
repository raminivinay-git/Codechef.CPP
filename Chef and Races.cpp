#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            int x, y, a, b;
            cin >> x >> y >> a >> b;
            
            int ans = 2;
            if (x == a || x == b) ans--;
            if (y == a || y == b) ans--;
            
            cout << ans << "\n";
        }
    }
    return 0;
}
