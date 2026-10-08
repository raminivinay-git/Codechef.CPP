#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, k;
        cin >> a >> b >> k;
        int diff = abs(a - b);
        int steps = (diff + k - 1) / k;
        cout << steps << "\n";
    }
    return 0;
}
