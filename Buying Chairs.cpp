#include <bits/stdc++.h>

using namespace std;

int BuyingChairs(int w, int p, int k) {
    if (w >= k) {
        return k * 2;
    }
    else {
        int diff = k - w;
        return (w * 2) + (diff * 1);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int w, p, k;
        cin >> w >> p >> k;
        cout << BuyingChairs(w, p, k) << endl;
    }
    return 0;
}
