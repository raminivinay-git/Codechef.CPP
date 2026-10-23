#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int a[155];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int max_points = 0;
        for (int i = 0; i < n; i++) {
            int b;
            cin >> b;
            
            int current_points = (a[i] * 20) - (b * 10);
            if (current_points < 0) {
                current_points = 0;
            }
            
            max_points = max(max_points, current_points);
        }
        
        cout << max_points << "\n";
    }
    return 0;
}
