#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int h, ts;
        double c;
        cin >> h >> c >> ts;
        
        bool cond1 = (h > 50);
        bool cond2 = (c < 0.7);
        bool cond3 = (ts > 5600);
        
        if (cond1 && cond2 && cond3) {
            cout << 10 << "\n";
        } else if (cond1 && cond2) {
            cout << 9 << "\n";
        } else if (cond2 && cond3) {
            cout << 8 << "\n";
        } else if (cond1 && cond3) {
            cout << 7 << "\n";
        } else if (cond1 || cond2 || cond3) {
            cout << 6 << "\n";
        } else {
            cout << 5 << "\n";
        }
    }
    return 0;
}
