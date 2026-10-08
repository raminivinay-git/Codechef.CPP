#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[105];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int min_cost = 1e9;
        for (int i = 0; i < n - 1; i++) {
            int cost = a[i] + (a[i + 1] / 2);
            min_cost = min(min_cost, cost);
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int cost = a[i] + a[j];
                if (j == i + 1) {
                    cost = a[i] + (a[j] / 2);
                }
                min_cost = min(min_cost, cost);
            }
        }
        cout << min_cost << "\n";
    }
    return 0;
}
