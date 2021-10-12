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

void itob(int n, char s[], int b) {
    int i = 0;
    do {
        int temp = n % b;
        if (temp < 10) {
            s[i] = temp + '0';
        }
        else {
            s[i] = temp + 'A' - 10;
        }
        n /= b;
        i++;
    } while (n != 0);
    s[i] = '\0';
    reverse(s);
}

int main() {
    int input = 0, base = 0;
    const int MAX_INT_LEN = 12;
    char string[MAX_INT_LEN];
    printf("Please enter a number: ");
    scanf("%d", &input);
    printf("Please enter a base: ");
    scanf("%d", &base);
    itob(input, string, base);
    printf("%s", string);
    return 0;
}