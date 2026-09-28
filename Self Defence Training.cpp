#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 0; i < n; i++) {
            int age;
            cin >> age;
            if (age >= 10 && age <= 60) {
                count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}
