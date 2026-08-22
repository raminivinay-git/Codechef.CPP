#include <bits/stdc++.h>

using namespace std;

void NearestSquare(int n) {
    int b = sqrt(n);
    cout << b * b << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        NearestSquare(n);
    }
    return 0;
}
