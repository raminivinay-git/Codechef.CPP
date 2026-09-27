#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int even_count = n / 2;
        int odd_count = n - even_count;
        int total_duration = (even_count * a) + (odd_count * b);
        cout << total_duration << "\n";
    }
    return 0;
}
