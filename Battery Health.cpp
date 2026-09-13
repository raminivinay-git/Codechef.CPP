#include <bits/stdc++.h>

using namespace std;

class Battery {
    public: string BatteryHealth(int x) {
        if (x >= 80) {
            return "YES";
        }
        else {
            return "NO";
        }
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        Battery b;
        int x;
        cin >> x;
        cout << b.BatteryHealth(x) << endl;
    }
    return 0;
}
