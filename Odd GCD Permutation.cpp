#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        if (n % 2 != 0) {
            cout << -1 << "\n";
        } else {
            for (int i = n; i >= 1; --i) {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
    
    return 0;
}
