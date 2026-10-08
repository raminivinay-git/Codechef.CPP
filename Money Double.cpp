#include <iostream>

using namespace std;

long long solve(long long x, int y) {
    for (int i = 0; i < y; i++) {
        long long opt1 = x + 1000;
        long long opt2 = x * 2;
        if (opt1 > opt2) {
            x = opt1;
        } else {
            x = opt2;
        }
    }
    return x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        int y;
        cin >> x >> y;
        cout << solve(x, y) << "\n";
    }
    return 0;
}
