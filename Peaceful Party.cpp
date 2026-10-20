#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int pa, pb, pc;
        cin >> pa >> pb >> pc;
        int opt1 = pa + pc;
        int opt2 = pb;
        cout << max(opt1, opt2) << "\n";
    }
    return 0;
}
