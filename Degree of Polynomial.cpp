#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int max_degree = 0;
        
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            if (a != 0) {
                max_degree = i;
            }
        }
        
        cout << max_degree << "\n";
    }
    return 0;
}
