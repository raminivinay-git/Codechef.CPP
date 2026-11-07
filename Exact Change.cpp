#include <iostream>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        if (n >= 5) {
            cout << n - 4 << "\n";
        } else {
            cout << n << "\n";
        }
    }
    return 0;
}
