#include <bits/stdc++.h>

using namespace std;

int DonationDrive(int n, int x) {
    return n - x;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        cout << DonationDrive(n, x) << endl;
    }
    return 0;
}
