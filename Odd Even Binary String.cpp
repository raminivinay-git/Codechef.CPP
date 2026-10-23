#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int count_zero = 0;
        for (int i = 0; i < n; i++) {
            int b;
            cin >> b;
            if (b == 0) {
                count_zero++;
            }
        }
        
        if (count_zero % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
