#include <bits/stdc++.h>

using namespace std;

string TIME(int x) {
    if (x >= 30) {
        return "YES";
    }
    else {
        return "NO";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << TIME(x) << endl;
    }
    return 0;
}
