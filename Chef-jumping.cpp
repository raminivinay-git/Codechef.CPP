#include <iostream>

using namespace std;

int main() {
    long long a;
    if (cin >> a) {
        int r = a % 6;
        cout << (r == 0 || r == 1 || r == 3 ? "yes\n" : "no\n");
    }
    return 0;
}
