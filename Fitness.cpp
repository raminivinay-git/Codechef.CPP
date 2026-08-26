#include <bits/stdc++.h>

using namespace std;

void Fitness(int x) {
    cout << x * 10 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        Fitness(x);
    }
    return 0;
}
