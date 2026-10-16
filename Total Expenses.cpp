#include <iostream>
#include <iomanip>
using namespace std;

void solve() {
    double quantity, price;
    cin >> quantity >> price;
    double total = quantity * price;
    if (quantity > 1000) {
        total *= 0.9;
    }
    cout << fixed << setprecision(6) << total << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
