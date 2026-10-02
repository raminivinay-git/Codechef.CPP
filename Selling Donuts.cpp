#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        
        int sad_count = 0;
        for (int i = 0; i < m; i++) {
            int b;
            cin >> b;
            if (a[b] > 0) {
                a[b]--;
            } else {
                sad_count++;
            }
        }
        
        cout << sad_count << "\n";
    }
    
    return 0;
}
