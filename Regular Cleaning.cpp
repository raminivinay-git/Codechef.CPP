#include <bits/stdc++.h>

using namespace std;

void RegularCleaning(int n) {
    cout << 10 - (n % 10) << endl;
}

int main() {
    int n;
    cin >> n;
    RegularCleaning(n);
    return 0;
}
