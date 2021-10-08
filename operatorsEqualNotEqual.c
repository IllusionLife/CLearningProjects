#include <stdio.h>

int main() {
    int x = 1;
    int y = 2;
    int t = (x == y), f = (x != y);

    printf("T = %d\n", t);
    printf("F = %d\n", f);

    return 0;
}
