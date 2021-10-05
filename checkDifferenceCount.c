#include <stdio.h>

int checkDifferenceCount(unsigned int inputOne, unsigned int inputTwo) {
    int difference = 0;
    while (inputOne || inputTwo) {
        if ((inputOne & 1) != (inputTwo & 1)) { 
            difference++;
        }
        inputOne = inputOne >> 1;
        inputTwo = inputTwo >> 1;
    }
    return difference;
}

int main() {
    unsigned char inputOne = 0, inputTwo = 0;
    printf("Please enter the first byte:\n");
    scanf("%u", &inputOne);

    printf("Please enter the second byte:\n");
    scanf("%u", &inputTwo);

    printf("The different bits are %d in total.", checkDifferenceCount(inputOne, inputTwo));
    return 0;
}
