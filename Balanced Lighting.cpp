#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        int red = 0, blue = 0, zero = 0;
        for (int i = 0; i < n; ++i) {
            int c;
            cin >> c;
            if (c == 1) red++;
            else if (c == 2) blue++;
            else zero++;
        }
        int needed = n / 2;
        if (n % 2 != 0) {
            cout << "No\n";
        } else {
            if (red <= needed && blue <= needed && (red + zero >= needed) && (blue + zero >= needed)) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }
    return 0;
}
