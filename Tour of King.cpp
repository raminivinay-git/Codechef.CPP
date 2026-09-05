#include <bits/stdc++.h>

using namespace std;

int Tour(int n, int m) {
    return (n * 5) + (m * 7);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << Tour(n, m) << endl;
    }
    return 0;
}
