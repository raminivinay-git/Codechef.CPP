#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAXN = 200005;

int a[MAXN];
int lc[MAXN];
int rc[MAXN];
int st[MAXN];
int su[MAXN];
int sl[MAXN];
int sr[MAXN];
int dp[MAXN];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            lc[i] = 0;
            rc[i] = 0;
            dp[i] = 0;
        }
        dp[0] = 1;

        int top = 0;
        for (int i = 1; i <= n; i++) {
            int last = 0;
            while (top > 0 && a[st[top]] < a[i]) {
                last = st[top];
                top--;
            }
            if (top > 0) {
                rc[st[top]] = i;
            }
            lc[i] = last;
            st[++top] = i;
        }

        int root = st[1];
        int cur = root, cl = 1, cr = n;
        top = 0;

        while (cur != 0 || top > 0) {
            while (cur != 0) {
                su[++top] = cur;
                sl[top] = cl;
                sr[top] = cr;
                cr = cur - 1;
                cur = lc[cur];
            }
            cur = su[top];
            cl = sl[top];
            cr = sr[top];
            top--;

            int low = max(cl, cur - a[cur] + 1);
            int high = min(cur, cr - a[cur] + 1);
            for (int i = low; i <= high; i++) {
                dp[i + a[cur] - 1] += dp[i - 1];
                if (dp[i + a[cur] - 1] >= MOD) {
                    dp[i + a[cur] - 1] -= MOD;
                }
            }

            cl = cur + 1;
            cur = rc[cur];
        }

        cout << dp[n] << "\n";
    }
    return 0;
}
