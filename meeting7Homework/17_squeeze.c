#include <stdio.h>

void squeeze(char s[], char c) {
    int y = 0;
    for (int i = 0; s[i] != '\0'; i++, y++)
    {
        while (s[i] == c) {
            i++;
        }
        s[y] = s[i];
    }
    s[y] = '\0';
    
}

int main() {
    char charValue;
    const int MAX_SIZE = 100;
    char str[MAX_SIZE];
    printf("Please enter the desired string: ");
    scanf("%s", str);
    printf("\nPlease enter the character, that you wish to delete: ");
    scanf(" %c", &charValue);

    squeeze(str, charValue);
    printf("%s", str);
    return 0;
}

