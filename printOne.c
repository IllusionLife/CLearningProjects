#include <stdio.h>

int main() {
    char a = -127;
    unsigned char b = 255;
    unsigned int c = 63498;
    unsigned long int d = 4294967292;
    long long int e = -9000000000000775845;

    printf("%d\n", a);
    printf("%u\n", b);
    printf("%u\n", c);
    printf("%lu\n", d);
    printf("%lld\n", e);
}
