#include <iostream>

using namespace std;

void WaterConsumption(int x) {
    if (x >= 2000) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        WaterConsumption(x);
    }
    return 0;
}
