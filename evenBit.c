#include <stdio.h>

#define ODD_BIT_MASK 85

int evenBit(char num) {
    return (num & ODD_BIT_MASK);
}

int main() {
    char input = 0;
    int index = 0;
    short value = 0;

    printf("Please enter your char/number:\n");
    scanf("%d", &input);
    printf("The resulted byte is %d", evenBit(input));
    return 0;
}
