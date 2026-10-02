#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long free_gifts = n / 5;
        cout << n - free_gifts << "\n";
    }
    return 0;
}
