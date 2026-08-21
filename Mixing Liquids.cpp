#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int A, B;
        cin >> A >> B;

        int batches = min(A, B / 2);
        cout << batches * 3 << endl;
    }

    return 0;
}
