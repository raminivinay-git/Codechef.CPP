#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> temp(n);
        for (int i = 0; i < n; i++) {
            cin >> temp[i];
        }
        
        int count = 0;
        bool has_jacket = false;
        
        for (int i = 0; i < n; i++) {
            if (!has_jacket && temp[i] < a) {
                has_jacket = true;
                count++;
            } else if (has_jacket && temp[i] > b) {
                has_jacket = false;
            }
        }
        
        cout << count << "\n";
    }
    return 0;
}
