#include <stdio.h>

int main() {

    const char s[] = "Hello";
    int i = 0;
    while (s[i] != '\0') {
        printf("%c", s[i++]);
    }
    printf("\nTotal characters: %d", i);
    return 0;
}
