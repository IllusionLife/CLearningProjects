#include <stdio.h>

int reverseBit(char num, int i) {
    if ((num >> i) & 1 == 1) {
        return (num & ~(1 << i));
    }
    else {
        return (num | (1 << i));
    };
}

int main() {
    char input = 0;
    int index = 0;
    printf("Please enter your char/number:\n");
    scanf("%d", &input);
    printf("Please enter the index of the byte you wish to reverse:\n");
    scanf("%d", &index);
    printf("The resulted byte is %d", reverseBit(input, index));
    return 0;
}
