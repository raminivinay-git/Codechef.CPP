#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin >> x;
    int digit = x % 10;
    int num = x / 10;
    if (digit == num) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
    return 0;
}
