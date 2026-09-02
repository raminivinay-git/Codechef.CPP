#include <bits/stdc++.h>

using namespace std;

string PUZZLE(int n) {
    if (n >= 6 && n <= 8) {
        return "YES";
    }
    else {
        return "NO";
    }
}

int main() {
    int n;
    cin >> n;
    cout << PUZZLE(n) << endl;
    return 0;
}
