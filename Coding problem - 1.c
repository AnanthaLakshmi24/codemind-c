
#include <stdio.h>
#include <math.h>

int main() {
    int t, a, b;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", (int)ceil(a/5.0) - (int)ceil(b/5.0));
    }
    return 0;
}
