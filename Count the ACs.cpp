#include <cstdio>

using namespace std;

int main() {
    int t;
    if (scanf("%d", & t) != 1) return 0;
    while (t--) {
        int p;
        scanf("%d", & p);
        int hundreds = p / 100;
        int ones = p % 100;
        if (hundreds + ones <= 10) {
            printf("%d\n", hundreds + ones);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}
