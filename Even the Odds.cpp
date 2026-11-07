#include <iostream>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            
            int first_odd = -1;
            int last_odd = -1;
            int odd_count = 0;
            
            for (int i = 0; i < n; ++i) {
                int a;
                cin >> a;
                if (a % 2 != 0) {
                    odd_count++;
                    if (first_odd == -1) first_odd = i;
                    last_odd = i;
                }
            }
            
            if (odd_count % 2 == 0) {
                cout << n << "\n";
            } else {
                int len1 = n - first_odd - 1;
                int len2 = last_odd;
                cout << (len1 > len2 ? len1 : len2) << "\n";
            }
        }
    }
    return 0;
}
