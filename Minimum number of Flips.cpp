#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if (n % 2 != 0 || sum % 2 != 0) {
            cout << -1 << "\n";
        } else {
            cout << abs(sum) / 2 << "\n";
        }
    }
    return 0;
}
