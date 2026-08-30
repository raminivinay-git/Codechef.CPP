#include <bits/stdc++.h>

using namespace std;

void InternationalEducationDay(int a, int b, int c) {
    cout << max((a * c), (b * c)) << endl;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    InternationalEducationDay(a, b, c);
    return 0;
}
