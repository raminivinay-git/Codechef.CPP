#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            int pos_count = 0;
            int neg_count = 0;
            
            for (int i = 0; i < n; i++) {
                int a;
                cin >> a;
                if (a > 0) {
                    pos_count++;
                } else {
                    neg_count++;
                }
            }
            
            if (pos_count == 0 || neg_count == 0) {
                cout << n << " " << n << "\n";
            } else {
                cout << max(pos_count, neg_count) << " " << min(pos_count, neg_count) << "\n";
            }
        }
    }
    return 0;
}
