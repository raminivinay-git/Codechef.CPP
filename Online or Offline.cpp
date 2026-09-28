#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double n, m;
        cin >> n >> m;
        double online_cost = n * 0.9;
        if (online_cost < m) {
            cout << "ONLINE\n";
        } else if (online_cost > m) {
            cout << "DINING\n";
        } else {
            cout << "EITHER\n";
        }
    }
    return 0;
}
