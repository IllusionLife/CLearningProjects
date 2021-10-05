#define BIT_MASK_ONE_ZERO_ONE 5 
#define BIT_MASK_ZERO_ONE_ZERO 2 

#include <stdio.h>

int main() {
    
    unsigned char input = 0;
    scanf("%d", &input);
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (((input & BIT_MASK_ONE_ZERO_ONE) == 0) && ((input & BIT_MASK_ZERO_ONE_ZERO) == BIT_MASK_ZERO_ONE_ZERO)) {
            count++;
        }
        input = input >> 1;
    }
    printf("The bits 010 appear %u times", count);

    return 0;
}
