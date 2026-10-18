#include <iostream>

using namespace std;

void solve() {
    int x;
    cin >> x;
    string dirs[] = {"North", "East", "South", "West"};
    cout << dirs[x % 4] << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
