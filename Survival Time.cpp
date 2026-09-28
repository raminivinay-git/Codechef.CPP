#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, x, d;
        cin >> n >> x >> d;
        int total_family = 5;
        int daily_consumption = total_family * x;
        int days_with_food = n / daily_consumption;
        cout << days_with_food + d << "\n";
    }
    return 0;
}
