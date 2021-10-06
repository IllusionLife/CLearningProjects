#include <stdio.h>
#include <stdlib.h>

int main() {

    const char s1[] = "Hello World!";
    int i = 0;
    while (s1[i] != '\0') {
        i++;
    }
    char* s2 = (char*) malloc ((i+1) * sizeof(char));
    for (int y = 0; y < i+1; y++)
    {
        s2[y] = s1[i - y];
        printf("%c", s2[y]);
    }
    s2[i+1] = s1[i+1];
    printf("%s", s2);
    free(s2);

    return 0;
}
