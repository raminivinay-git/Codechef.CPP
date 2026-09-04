#include <bits/stdc++.h>

using namespace std;

string RCB_vs_CSK(int x, int y) {
    if (abs(x - y) >= 18) {
        return "RCB";
    }
    else {
        return "CSK";
    }
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << RCB_vs_CSK(x, y) << endl;
    return 0;
}
