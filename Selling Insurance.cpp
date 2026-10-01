#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double x;
        cin >> x;
        double commission = 0.20 * x;
        int ans = ceil(100.0 / commission);
        cout << ans << "\n";
    }
    return 0;
}
