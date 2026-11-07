#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            string a;
            cin >> a;
            
            bool all_z = true;
            for (int i = 0; i < n; ++i) {
                if (a[i] != 'z') {
                    all_z = false;
                    break;
                }
            }
            
            if (all_z) {
                cout << -1 << "\n";
            } else {
                for (int i = 0; i < n; ++i) {
                    cout << 'z';
                }
                cout << "\n";
            }
        }
    }
    return 0;
}
