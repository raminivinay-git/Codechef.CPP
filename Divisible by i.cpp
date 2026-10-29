#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int arr[n];
        int l = 1, r = n;
        
        for (int i = n - 1; i >= 0; i--) {
            if ((n - i) % 2 == 1) {
                arr[i] = r--;
            } else {
                arr[i] = l++;
            }
        }
        
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
