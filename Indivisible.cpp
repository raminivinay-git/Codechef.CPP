#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int k = 2;
        while (a % k == 0 || b % k == 0 || c % k == 0) {
            k++;
        }
        cout << k << "\n";
    }
    return 0;
}
