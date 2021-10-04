#include <stdio.h>

int main() {
    char cCharMin = -127;
    unsigned char cUnsignedCharMax = 255;
    unsigned short int iUnsignedShortIntMax = 63498;
    unsigned int iUnsignedIntMax = 4294967292;
    long long lLongIntMax = -9000000000000775845;
    
    printf("%d\n", cCharMin);
    printf("%d\n", cUnsignedCharMax);
    printf("%d\n", iUnsignedShortIntMax);
    printf("%u\n", iUnsignedIntMax);
    printf("%lld\n", lLongIntMax);

    return 0;
}
