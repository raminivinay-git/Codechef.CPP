#include <bits/stdc++.h>

using namespace std;

int main() {
    int f1, p1, f2, p2;
    cin >> f1 >> p1 >> f2 >> p2;
    int first = abs(f1 - p1);
    int second = abs(f2 - p2);
    if (first < second) {
        cout << "FIRST" << endl;
    }
    else if (first > second) {
        cout << "SECOND" << endl;
    }
    else {
        cout << "BOTH" << endl;
    }
    return 0;
}
