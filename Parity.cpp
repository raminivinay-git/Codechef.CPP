#include <bits/stdc++.h>

using namespace std;

class parity {
    public: string chocolate(int n) {
        if (n % 2 == 0) {
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
        parity p;
        int n;
        cin >> n;
        cout << p.chocolate(n) << endl;
    }
    return 0;
}
