#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int rounds = 0;
        int temp = n;
        while (temp > 1) {
            temp /= 2;
            rounds++;
        }
        int total_time = rounds * a + (rounds - 1) * b;
        cout << total_time << "\n";
    }
    return 0;
}
