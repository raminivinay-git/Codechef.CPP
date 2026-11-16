#include <iostream>
#include <string>
#include <stack>

using namespace std;

void solve() {
    string s;
    cin >> s;
    stack<char> st;
    
    for (char c : s) {
        if (isalpha(c)) {
            cout << c;
        } else if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                cout << st.top();
                st.pop();
            }
            if (!st.empty()) {
                st.pop();
            }
        } else {
            st.push(c);
        }
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
