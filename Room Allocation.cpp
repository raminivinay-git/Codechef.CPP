#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int total_rooms = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            total_rooms += (a + 1) / 2;
        }
        cout << total_rooms << "\n";
    }
    return 0;
}
