#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string j, s;
        cin >> j >> s;
        
        unordered_set<char> jewels;
        for (char c : j) {
            jewels.insert(c);
        }
        
        int count = 0;
        for (char c : s) {
            if (jewels.count(c)) {
                count++;
            }
        }
        
        cout << count << "\n";
    }
    return 0;
}
