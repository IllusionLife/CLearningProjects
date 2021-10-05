#include <stdio.h>

#define MAX_BITS 255 // 255 = 11111111

int removeNLastBits(unsigned char num, int n) {
    return (num & ~(MAX_BITS << 8-n));
}

int main() {
    unsigned char input = 0;
    int digits = 0;
    printf("Please enter your char/number:\n");
    scanf("%d", &input);
    printf("How many digits from the back do you wish to set to 0:\n");
    scanf("%d", &digits);
    printf("Result after changing the digits: %d", removeNLastBits(input, digits));
    return 0;
}
