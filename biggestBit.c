#include <stdio.h>

int biggestBit(char num) {
    int i = 8;
    while (num!= 0) {
        if (num & 128)
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
    printf("The biggest active byte is at position %d", biggestBit(input));
    return 0;
}
