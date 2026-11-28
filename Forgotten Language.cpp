#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        string dict[105];
        bool found[105];
        for (int i = 0; i < n; i++) {
            cin >> dict[i];
            found[i] = false;
        }

        for (int i = 0; i < k; i++) {
            int l;
            cin >> l;
            for (int j = 0; j < l; j++) {
                string word;
                cin >> word;
                for (int m = 0; m < n; m++) {
                    if (dict[m] == word) {
                        found[m] = true;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (found[i]) cout << "YES";
            else cout << "NO";
            if (i < n - 1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
