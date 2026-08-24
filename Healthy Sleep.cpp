#include <bits/stdc++.h>

using namespace std;

void HealthySleep(int h) {
    if (h < 8) {
        cout << "LESS" << endl;
    }
    else if (h == 8) {
        cout << "PERFECT" << endl;
    }
    else {
        cout << "MORE" << endl;
    }
}

int main() {
    int h;
    cin >> h;
    HealthySleep(h);
    return 0;
}
