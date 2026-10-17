#include <iostream>

using namespace std;

void solve() {
    int x, y, p, q;
    cin >> x >> y >> p >> q;
    int chef_penalty = x + p * 10;
    int chefina_penalty = y + q * 10;
    
    if (chef_penalty < chefina_penalty) {
        cout << "Chef\n";
    } else if (chefina_penalty < chef_penalty) {
        cout << "Chefina\n";
    } else {
        cout << "Draw\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
