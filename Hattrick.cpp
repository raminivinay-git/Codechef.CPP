#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string ball[6];
        for (int i = 0; i < 6; i++) {
            cin >> ball[i];
        }
        
        bool hattrick = false;
        for (int i = 0; i <= 3; i++) {
            if (ball[i] == "W" && ball[i+1] == "W" && ball[i+2] == "W") {
                hattrick = true;
                break;
            }
        }
        
        if (hattrick) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}
