#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int max_val = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                max_val = max(max_val, a[i] + a[j]);
            }
        }

        int max_count = 0;
        int total_pairs = (n * (n - 1)) / 2;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] + a[j] == max_val) {
                    max_count++;
                }
            }
        }

        double probability = (double)max_count / total_pairs;
        cout << fixed << setprecision(8) << probability << "\n";
    }

    return 0;
}
