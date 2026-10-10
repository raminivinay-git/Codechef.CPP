#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, m, d;
        cin >> x >> m >> d;
        int max_time = min(m * x, x + d);
        
        cout << max_time << "\n";
    }
    
    return 0;
}
