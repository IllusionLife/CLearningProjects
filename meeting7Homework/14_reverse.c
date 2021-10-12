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

int main() {
    char str[] = "Hello!";
    reverse(str);
    printf("%s", str);
    return 0;
}