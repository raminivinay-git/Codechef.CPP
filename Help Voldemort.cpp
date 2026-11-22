#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[1005];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    long long energy = 0;
    for (int i = 0; i < n - 1; i++) {
        energy += a[i] * a[i + 1];
    }
    cout << energy << "\n";
    return 0;
}
