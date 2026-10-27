#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }

            for (int i = 0; i < n; i++) {
                auto it = upper_bound(a.begin(), a.end(), a[i]);
                cout << distance(it, a.end()) << (i == n - 1 ? "" : " ");
            }
            cout << "\n";
        }
    }

    return 0;
}
