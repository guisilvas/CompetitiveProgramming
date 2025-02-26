#include <stdio.h>

int main(void) {
    int n=0, x=0, y=0, z=0, count = 0;
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        scanf("%d %d %d", &x, &y, &z);
        if (x + y + z >= 2) count++;
    }
    printf("%d", count);

    return 0;
}