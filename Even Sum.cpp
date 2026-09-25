#include <iostream>

#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int total_sum = 0;
        vector < int > a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total_sum += a[i];
        }

        bool possible = false;
        for (int i = 0; i < n; i++) {
            if ((total_sum - a[i]) % 2 == 0) {
                possible = true;
                break;
            }
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
