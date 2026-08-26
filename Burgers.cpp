#include <bits/stdc++.h>

using namespace std;

void Burgers(int a, int b) {
    int mini = min(a, b);
    cout << mini << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        Burgers(a, b);
    }
    return 0;
}
