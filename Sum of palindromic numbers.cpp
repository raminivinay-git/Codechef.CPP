#include <iostream>

using namespace std;

long long p[100005];

int main() {
    for (int i = 1; i <= 100000; i++) {
        int r = 0, t = i;
        while (t) {
            r = r * 10 + t % 10;
            t /= 10;
        }
        p[i] = p[i - 1] + (r == i ? i : 0);
    }
    
    int t, l, r;
    cin >> t;
    while (t--) {
        cin >> l >> r;
        cout << p[r] - p[l - 1] << "\n";
    }
    return 0;
}
