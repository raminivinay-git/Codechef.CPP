#include <bits/stdc++.h>

using namespace std;

class cake {
    public: int BakeryProblem(int n, int k) {
        if (k + (n * 60) < (n * 100)) {
            return k + (n * 60);
        }
        else {
            return n * 100;
        }
    }
};

int main() {
    cake C;
    int n, k;
    cin >> n >> k;
    cout << C.BakeryProblem(n, k);
    return 0;
}
