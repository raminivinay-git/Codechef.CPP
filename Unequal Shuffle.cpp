#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string A, B;

        cin >> N;
        cin >> A;
        cin >> B;

        int aA = count(A.begin(), A.end(), 'a');
        int aB = count(B.begin(), B.end(), 'a');

        if (aA == N - aB)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
