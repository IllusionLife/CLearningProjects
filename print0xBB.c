#include <stdio.h>

int main() {

    double a = 0xBBBBBBBBBBBBBBBB;
    long long int b = 0xBBBBBBBBBBBBBBBB;
    unsigned long long int c = 0xBBBBBBBBBBBBBBBB;

    printf("Double: %lf\n", a);
    printf("Long Long Int: %lld\n", b);
    printf("Unsigned Long Long Int: %llu\n", c);
}
