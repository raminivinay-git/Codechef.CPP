#include <bits/stdc++.h>

using namespace std;

int Missing_Number(int s) {
    if (s == 6) {
        return 4;
    }
    else if (s == 7) {
        return 3;
    }
    else if (s == 8) {
        return 2;
    }
    else if (s == 9) {
        return 1;
    }
}

int main() {
    int s;
    cin >> s;
    cout << Missing_Number(s);
    return 0;
}
