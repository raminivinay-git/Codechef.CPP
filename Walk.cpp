#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int max_velocity = 0;
        for (int i = 0; i < n; i++) {
            int w;
            cin >> w;
            max_velocity = max(max_velocity, w + i);
        }
        
        cout << max_velocity << "\n";
    }
    return 0;
}
