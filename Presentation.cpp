#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, temp;
    cin >> n;
    int sec = n * 30;
    if (sec >= 600) {
        cout << "0" << endl;
    }
    else {
        temp = 600 - sec;
        cout << temp / 30 << endl;
    }
    return 0;
}
