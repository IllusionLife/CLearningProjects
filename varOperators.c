#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;
    int z = 30;
    int t = x == y + (z < y) != 20;

    printf("T = %d\n", t);

    return 0;
}
