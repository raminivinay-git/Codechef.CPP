#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> attA(n), defA(n), attP(n), defP(n);
        int sumAttA = 0, sumDefA = 0, sumAttP = 0, sumDefP = 0;
        for (int i = 0; i < n; i++) {
            cin >> attA[i];
            sumAttA += attA[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> defA[i];
            sumDefA += defA[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> attP[i];
            sumAttP += attP[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> defP[i];
            sumDefP += defP[i];
        }

        if (sumAttA > sumAttP && sumDefA > sumDefP) {
            cout << "A\n";
        } else if (sumAttP > sumAttA && sumDefP > sumDefA) {
            cout << "P\n";
        } else {
            cout << "DRAW\n";
        }
    }
    return 0;
}
