#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, n;
        cin >> x >> n;
        
        long long total_planes_needed = (n + 99) / 100;
        
        if (total_planes_needed > x) {
            cout << total_planes_needed - x << "\n";
        } else {
            cout << 0 << "\n";
        }
    }
    return 0;
}
