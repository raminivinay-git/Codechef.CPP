#include <bits/stdc++.h>

using namespace std;

void FourTickets(int t) {
    if (t == 0) {
        return;
    }

    int x;
    cin >> x;
    if ((x * 4) <= 1000) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    FourTickets(t - 1);
}
int main() {
    int t;
    cin >> t;
    FourTickets(t);
    return 0;
}
