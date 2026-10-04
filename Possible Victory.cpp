#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, o, c;
    cin >> r >> o >> c;
    int max_score = c + (20 - o) * 36;
    if (max_score > r) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
