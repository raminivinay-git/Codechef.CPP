#include <bits/stdc++.h>

using namespace std;

int Fees(int n) {
    return (n * 2000) / 500;
}

int main() {
    int n;
    cin >> n;
    cout << Fees(n);
    return 0;
}
