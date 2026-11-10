#include <iostream>
#include <algorithm>

using namespace std;

long long s[5005];

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        sort(s, s + n);
        long long min_diff = s[1] - s[0];
        for (int i = 2; i < n; i++) {
            if (s[i] - s[i - 1] < min_diff) {
                min_diff = s[i] - s[i - 1];
            }
        }
        cout << min_diff << "\n";
    }
    return 0;
}
