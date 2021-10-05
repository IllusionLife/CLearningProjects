#include <stdio.h>

#define LAST_POS_BIT 128 // 10000000

int biggestBit(char num) {
    int i = 8;
    while (num!= 0) {
        if (num & LAST_POS_BIT) 
        {
            return i-1;
        }
        else 
        {
            i--;
            num = num << 1;
        }
    }
    return i;
}

int main() {
    long input = 0;

    printf("Please enter your char/number:\n");
    scanf("%d", &input);
    printf("The biggest active byte is at position %d", biggestBit(input)); // 100 - 
    return 0;
}
