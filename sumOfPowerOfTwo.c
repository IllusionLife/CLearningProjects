#include <stdio.h>

void sumOfPowerOfTwo(unsigned char num) {
    int power = 0;
    printf("%d =\n", num);
    while (power < 8) {
        printf("%d * 2^%d\n", (num & 1), power++);
        num = num >> 1;
    }
}

int main() {
    unsigned char input = 0;
    printf("Please enter your char/number:\n");
    scanf("%d", &input);

    sumOfPowerOfTwo(input);
    return 0;
}
