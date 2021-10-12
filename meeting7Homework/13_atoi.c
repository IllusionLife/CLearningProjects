#include <stdio.h>

int main() {
    char stringToInt[] = "12345";
    int result = 0;
    for (int i = 0; stringToInt[i] != '\0'; i++)
    {
        result *= 10;
        result += stringToInt[i] - '0';
    }
    printf("%d", result);
    return 0;
}