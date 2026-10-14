#include <iostream>

using namespace std;

void solve() {
    int t;
    if (!(cin >> t)) return;
    while (t--) {
        char ch;
        cin >> ch;
        if (ch == 'B' || ch == 'b') {
            cout << "BattleShip\n";
        } else if (ch == 'C' || ch == 'c') {
            cout << "Cruiser\n";
        } else if (ch == 'D' || ch == 'd') {
            cout << "Destroyer\n";
        } else if (ch == 'F' || ch == 'f') {
            cout << "Frigate\n";
        }
    }
}

int main() {
    solve();
    return 0;
}
