#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    if (x >= 200) {
        cout << x - 50 << "\n";
    } else {
        cout << x << "\n";
    }
    return 0;
}
