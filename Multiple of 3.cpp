#include <bits/stdc++.h>

using namespace std;

int Multipleof3(int n) {
    if (n % 3 == 0) {
        return n;
    }
    else if (n % 3 == 1) {
        return n - 1;
    }
    else {
        return n + 1;
    }
}

int main() {
    int n;
    cin >> n;
    cout << Multipleof3(n);
    return 0;
}
