#include <stdio.h>
#include <windows.h>

void ledSelector(unsigned int num) {
    if (num == 0) 
        return;
    for (int i = 0; i < 32; i++) {
        num & 1 ? printf("*") : printf(".");
        num >>= 1;
        Sleep(70);
    }
    printf("\n");
}

int main() {
    unsigned int input = 0;
    printf("Welcome to LED selector. Please enter a number to see in binary using binary (* = 1 and . = 0)\n");
    printf("You can close the program anytyme by entering 0\n");
    do {
        scanf("%d", &input);
        ledSelector(input);
    }
    while (input);
}
