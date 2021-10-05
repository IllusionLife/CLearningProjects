#include <stdio.h>

#define FIRST_FIVE_BITS 7 // 00000111

int changeLastFiveBits(char num) {
    return (num & FIRST_FIVE_BITS);
}

int main() {
    long input = 0;

    printf("Please enter your char/number:\n");
    scanf("%d", &input);
    printf("After changing the digits %d", changeLastFiveBits(input));
    return 0;
}
