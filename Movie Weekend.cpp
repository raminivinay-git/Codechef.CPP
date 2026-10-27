#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> l(n);
        for (int i = 0; i < n; i++) {
            cin >> l[i];
        }
        vector<int> r(n);
        for (int i = 0; i < n; i++) {
            cin >> r[i];
        }

        int best_index = 0;
        int max_lr = -1;
        int max_r = -1;

        for (int i = 0; i < n; i++) {
            int current_lr = l[i] * r[i];
            if (current_lr > max_lr) {
                max_lr = current_lr;
                max_r = r[i];
                best_index = i;
            } else if (current_lr == max_lr) {
                if (r[i] > max_r) {
                    max_r = r[i];
                    best_index = i;
                }
            }
        }

        cout << best_index + 1 << "\n";
    }

    return 0;
}
