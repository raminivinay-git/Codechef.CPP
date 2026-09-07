#include <bits/stdc++.h>

using namespace std;

class Height {
    public: string RollerCoaster(int x, int h) {
        if (x >= h) {
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
        Height H;
        int x, h;
        cin >> x >> h;
        cout << H.RollerCoaster(x, h) << endl;
    }
    return 0;
}
