#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int total = a + b + c;
        int mn = min({a, b, c});
        cout << total - mn << "\n";
    }
    return 0;
}
