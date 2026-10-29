#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int min_ans = n - 2;
        int max_ans = (n - 1) * (n - 2) / 2;
        
        cout << min_ans << " " << max_ans << "\n";
    }
    return 0;
}
