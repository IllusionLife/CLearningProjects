#include <stdio.h>

int main() {
    unsigned char ucInputByte = 0;
    printf("Enter a char to be reversed:\n");
    scanf("%c", &ucInputByte);

    int iCharBitValue = 0, iCharDecValue = (int)ucInputByte;

    for(int i = 8; i != 0; i--) {
        iCharBitValue *= 10;
        iCharBitValue = iCharBitValue + (iCharDecValue % 2);
        iCharDecValue /= 2;
    }

    printf("The reversed char's bits look like this: %08d", iCharBitValue);

    return 0;
}