#include <stdio.h>

int bitAt(char num, int i){
    return (num >> i) & 1 ? 1 : 0;
}

int main() {
    char input = 0;
    int index = 0;
    printf("Please enter your char/number:\n");
    scanf("%d", &input);
    printf("Please enter the index of the byte you wish to check:\n");
    scanf("%d", &index);
    printf("The index at position %d is %d", index, bitAt(input, index));
    return 0;
}
