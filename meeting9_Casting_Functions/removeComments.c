#include <stdlib.h>
#include <stdio.h>
#include "headers\removeComments.h"


int getStringLen(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

void removeCommentsFromFile (char filePath[]) {
    FILE *fp, *temp;
    char fileLine[100];

    fp = fopen(filePath, "r");
    if (fp == NULL) {
        printf("Error occured.");
        return;
    }
    
    temp = fopen("temp", "w+");
    while (fgets(fileLine, 100, fp)) {
        int lineSize = getStringLen(fileLine) - 1;
        for (int i = 1; i <= lineSize; i++) {
            if ((fileLine[i-1] == '/') || (fileLine[i-1] == '*'))
            {
                if ((fileLine[i] == '/') || (fileLine[i] == '*'))
                {
                    fileLine[i] = ' ';
                    fileLine[i-1] = ' ';
                }
            }
        }
        printf("%s", fileLine);
        fputs(fileLine, temp);
    }
    fclose(fp);
    fclose(temp);
    remove(filePath);
    rename("temp", filePath);
    
}