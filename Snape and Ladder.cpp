#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double b, ls;
        cin >> b >> ls;
        double min_rs = sqrt(ls * ls - b * b);
        double max_rs = sqrt(ls * ls + b * b);
        cout << min_rs << " " << max_rs << "\n";
    }
    return 0;
}
