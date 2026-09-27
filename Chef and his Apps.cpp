#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int s, x, y, z;
        cin >> s >> x >> y >> z;
        int free_memory = s - (x + y);
        if (free_memory >= z) {
            cout << 0 << "\n";
        } else if (free_memory + x >= z || free_memory + y >= z) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
    }
    return 0;
}
