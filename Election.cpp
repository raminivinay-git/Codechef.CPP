#include <bits/stdc++.h>

using namespace std;

void seats(int n, int k) {
    if (k >= ((n / 2) + 1)) {
        cout << "0" << endl;
    }
    else {
        cout << ((n / 2) + 1) - k << endl;
    }
}
int main() {
    int n, k;
    cin >> n >> k;
    seats(n, k);
    return 0;
}
