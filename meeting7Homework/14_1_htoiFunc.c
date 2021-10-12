#include <stdio.h>

int htoi (char s[]) {
    int res = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        res *= 16;
        if (s[i] < 'A') {
            res = res + (s[i] - '0');
        }
        else if ((s[i] >= 'A') && (s[i] < 'G')) {
            res = res + ((s[i] - 'A') + 10);
        }
        else {
            res = res + ((s[i] - 'a') + 10);
        }
    }
    return res;
}

int main() {
    char stringToInt[] = "ff";
    int result = htoi(stringToInt);
    printf("\nResult is: %d", result);
    return 0;
}