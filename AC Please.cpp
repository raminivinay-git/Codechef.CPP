#include <bits/stdc++.h>

using namespace std;

void AirConditioning(int x) {
    if (x > 30) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
int main() {
    int x;
    cin >> x;
    AirConditioning(x);
    return 0;
}
