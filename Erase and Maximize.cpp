#include <iostream>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n, s;
            cin >> n >> s;
            
            int k = s - 5 * n;
            if (k < 0) k = 0;
            
            cout << 6 * n - k << "\n";
        }
    }
    return 0;
}
