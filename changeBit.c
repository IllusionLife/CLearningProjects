#include <stdio.h>

int changeBit(char num, int i, short bitValue) {
    if (bitValue == 0) {
        return (num & ~(1 << i));
    }
    else {
        return (num | (1 << i));
    }
}

int main() {
    char input = 0;
    int index = 0;
    short value = 0;

    printf("Please enter your char/number:\n");
    scanf("%d", &input);
    printf("Please enter the index of the byte you wish to change:\n");
    scanf("%d", &index);
    printf("Which value do you wish to set to the selected bit:\n");
    scanf("%d", &value);
    printf("The resulted byte is %d", changeBit(input, index, value));
    return 0;
}
