#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            string a, b;
            cin >> a >> b;
            
            int w = 0, l = 0;
            for (int i = 0; i < n; ++i) {
                if (a[i] == b[i]) {
                    continue;
                }
                if ((a[i] == 'R' && b[i] == 'S') || 
                    (a[i] == 'S' && b[i] == 'P') || 
                    (a[i] == 'P' && b[i] == 'R')) {
                    w++;
                } else {
                    l++;
                }
            }
            
            if (w > l) {
                cout << 0 << "\n";
            } else {
                cout << (l - w) / 2 + 1 << "\n";
            }
        }
    }
    return 0;
}
