#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int equal = a - b;
    if (equal % 2 == 0) {
        cout << equal / 2;
    }
    else {
        cout << "-1";
    }
    return 0;
}
