#include <stdio.h>

int clearBit(int num, int i) {
    return (num & ~(1 << i));
}

int main() {
    int input = 0;
    int index = 0;
    printf("Please enter your char/number:\n");
    scanf("%d", &input);
    printf("Please enter the index of the byte you wish to change to 0:\n");
    scanf("%d", &index);
    printf("The resulted byte is %d", clearBit(input, index));
    return 0;
}
