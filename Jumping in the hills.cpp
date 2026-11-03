#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, u, d;
        cin >> n >> u >> d;
        int h[105];
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
        
        bool p = true;
        int ans = 1;
        for (int i = 0; i < n - 1; i++) {
            if (h[i+1] > h[i]) {
                if (h[i+1] - h[i] <= u) ans++;
                else break;
            } else {
                if (h[i] - h[i+1] <= d) ans++;
                else if (p) {
                    p = false;
                    ans++;
                } else break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
