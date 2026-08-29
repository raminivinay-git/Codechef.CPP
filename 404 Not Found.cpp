#include <bits/stdc++.h>

using namespace std;

void NotFound(int x) {
    if (x == 404) {
        cout << "NOT FOUND";
    }
    else {
        cout << "FOUND";
    }
}

int main() {
    int x;
    cin >> x;
    NotFound(x);
    return 0;
}
