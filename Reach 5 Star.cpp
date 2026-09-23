#include <bits/stdc++.h>

using namespace std;

class star {
    public: string Reach5Star(int x, int y) {
        if ((x + y) >= 2000) {
            return "YES";
        }
        else {
            return "NO";
        }
    }
};
int main() {
    int x, y;
    cin >> x >> y;
    star s;
    cout << s.Reach5Star(x, y) << endl;
    return 0;
}
