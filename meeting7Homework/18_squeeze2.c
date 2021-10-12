#include <stdio.h>

void squeeze(char s1[], char s2[]) {
    int x = 0;
    do {
        int y = 0;
        for (int i = 0; s1[i] != '\0'; i++, y++)
        {
            while (s1[i] == s2[x]) {
                i++;
            }
            s1[y] = s1[i];
        }
        s1[y] = '\0';
        x++;
    } while (s2[x] != '\0');
}

int main() {
    const int MAX_SIZE = 1000;
    char str1[MAX_SIZE], str2[MAX_SIZE];
    printf("Please enter the desired string: ");
    scanf("%s", str1);
    printf("\nPlease enter the characters, that you wish to delete: ");
    scanf(" %s", str2);

    squeeze(str1, str2);
    printf("%s", str1);
    return 0;
}

