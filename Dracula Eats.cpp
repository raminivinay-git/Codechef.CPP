#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << (n / 7) + (n % 7 >= 2 ? 1 : 0) << "\n";
    }
    return 0;
}
