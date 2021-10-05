#include <stdio.h>

#define POSITION_DEVISIBLE_ON_THREE_32_BIT 613566756 // 613566756 = 00100100100100100100100100100100

long int setToEveryThirdPosition(unsigned long int num) {
    return (num | POSITION_DEVISIBLE_ON_THREE_32_BIT);
}

int main() {
    unsigned long int input = 0;
    printf("Please enter your long variable:\n");
    scanf("%lu", &input);

    printf("The result is: %d", setToEveryThirdPosition(input));
    return 0;
}
