#include <cstdio>

int main() {
    int t;
    if (scanf("%d", & t) != 1) return 0;
    while (t--) {
        int p, q;
        scanf("%d %d", & p, & q);
        int total = p + q;
        if ((total / 2) % 2 == 0) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }
    return 0;
}
