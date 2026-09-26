#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int na, nb, nc, nd;
        cin >> na >> nb >> nc >> nd;
        int max_val = max({na, nb, nc, nd});
        cout << max_val << "\n";
    }
    return 0;
}
