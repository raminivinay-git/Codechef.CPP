#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int minutes = 0;
        int work = 0;
        while (work < n) {
            minutes++;
            if (minutes % k != 0) {
                work++;
            }
        }
        cout << minutes << "\n";
    }
    return 0;
}
