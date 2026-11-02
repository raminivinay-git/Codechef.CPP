#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            pair<int, int> p[100005];
            for (int i = 0; i < n; i++) {
                int x, y;
                cin >> x >> y;
                p[i] = {x, -y}; 
            }
            
            sort(p, p + n);
            
            double ans = 0;
            for (int i = 1; i < n; i++) {
                double dx = p[i].first - p[i - 1].first;
                double dy = p[i].second - p[i - 1].second;
                ans += sqrt(dx * dx + dy * dy);
            }
            
            cout << fixed << setprecision(2) << ans << "\n";
        }
    }
    return 0;
}
