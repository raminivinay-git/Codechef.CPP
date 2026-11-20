#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long min_speed = LLONG_MAX;
    int count = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x <= min_speed) {
            count++;
            min_speed = x;
        }
    }
    cout << count << "\n";
    return 0;
}
