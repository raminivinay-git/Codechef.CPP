#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long l = n / 4;
        long long b = (n - 2 * l) / 2;
        cout << l * b << "\n";
    }
    return 0;
}
