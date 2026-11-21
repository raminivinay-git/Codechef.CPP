#include <bits/stdc++.h>
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

        int goodCount = 0;
        for (int i = 0; i < n; i++) {
            bool isGood = true;
            int start = max(0, i - 5);
            for (int j = start; j < i; j++) {
                if (a[i] >= a[j]) {
                    isGood = false;
                    break;
                }
            }
            if (isGood) {
                goodCount++;
            }
        }

        cout << goodCount << "\n";
    }
    return 0;
}
