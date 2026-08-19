#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int last = n % 10;
        while (n >= 10) {
            n = n / 10;
        }
        int first = n;
        cout << last + first << endl;
    }
    return 0;
}
