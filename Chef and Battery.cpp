#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int steps = 0;
        while (n != 50) {
            if (n < 50) {
                n += 2;
                steps++;
            } else {
                n -= 3;
                steps++;
            }
        }
        cout << steps << "\n";
    }
    return 0;
}
