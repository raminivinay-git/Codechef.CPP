#include <bits/stdc++.h>

using namespace std;

string AudibleRange(int x) {
    if (x >= 67 && x <= 45000) {
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
        cout << AudibleRange(x) << endl;
    }
    return 0;
}
