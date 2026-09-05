#include <bits/stdc++.h>

using namespace std;

class marks {
    public: int BestOfTwo(int x, int y) {
        return max(x, y);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        marks m;
        int x, y;
        cin >> x >> y;
        cout << m.BestOfTwo(x, y) << endl;
    }
    return 0;
}
