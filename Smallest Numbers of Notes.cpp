#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int notes[] = {100, 50, 10, 5, 2, 1};
    while (t--) {
        int n;
        cin >> n;
        int count = 0;
        for (int i = 0; i < 6; i++) {
            count += n / notes[i];
            n %= notes[i];
        }
        cout << count << "\n";
    }
    return 0;
}
