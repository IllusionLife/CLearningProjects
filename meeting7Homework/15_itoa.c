#include <stdio.h>

void reverse(char s[]) {
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;    
    }
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    } 
}

void itoa(int n, char s[]) {
    int i = 0;
    do {
        s[i] = (n % 10) + '0';
        n /= 10;
        i++;
    } while (n != 0);
    s[i] = '\0';
    reverse(s);
}

int main() {
    int input = 123123321;
    char string[12];
    itoa(input, string);
    printf("%s", string);
    return 0;
}