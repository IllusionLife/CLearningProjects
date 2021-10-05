#include <stdio.h>

#define EVEN_BIT_MASK 170 // 10101010

unsigned char reverseEvenBits(unsigned char num) {
    return (num ^ EVEN_BIT_MASK);
}

int main() {
    unsigned char input = 0;

    printf("Please enter your char/number:\n");
    scanf("%d", &input);
    printf("The resulted byte is %d", reverseEvenBits(input));
    return 0;
}
