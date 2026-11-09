#include <iostream>
using namespace std;

void solve() {
    int pc, pr;
    cin >> pc >> pr;
    int dc = (pc + 8) / 9;
    int dr = (pr + 8) / 9;
    if (dc < dr) {
        cout << 0 << " " << dc << "\n";
    } else {
        cout << 1 << " " << dr << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
