#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

#define ARR_SIZE1 10
#define ARR_SIZE2 100
#define ARR_SIZE3 1000
#define ARR_SIZE4 10000
#define ARR_SIZE5 100000

void sortBubble(int* arr, int arrSize) {
    clock_t beginTime = clock();
    int i = 0, j = 0;
    for (i = 0; i < arrSize-1; i++) {
        for (j = 0; j < arrSize-i-1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
    clock_t endTime = clock();
    double totalTime = (double)(endTime - beginTime) / CLOCKS_PER_SEC;
    printf("Total time to sort %d items using Bubble Sort is: %.0lf\n", arrSize, totalTime);
}

void sortInsertion(int* array, int arrSize) {
    clock_t beginTime = clock();
    for (int i = 0; i < arrSize; i++)
    {
        int n = i;
        while ((array[n] < array[n-1]) && (n > 0))
        {
            int temp = array[n];
            array[n] = array[n-1];
            array[--n] = temp;
        }
    }
    clock_t endTime = clock();
    double totalTime = (double)(endTime - beginTime) / CLOCKS_PER_SEC;
    printf("Total time to sort %d items using Insertion Sort is: %.0lf\n", arrSize, totalTime);
}

void sortFlagBubble(int *arr, int arrSize)
{
    clock_t beginTime = clock();
    int didSwap = 1;
    while (didSwap)
    {
        didSwap = 0;
        for (int i = 0, j = 1; i < (arrSize - 1); i++, j++)
        {
            int iCondDescending = ((1 == -1) && (*(arr + i) < *(arr + j)));
            int iCondAscending = ((1 == 1) && (*(arr + i) > *(arr + j)));

            if (iCondDescending || iCondAscending)
            {
                int iTemp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = iTemp;
                didSwap = 1;
            }
        }
    }
    clock_t endTime = clock();
    double totalTime = (double)(endTime - beginTime) / CLOCKS_PER_SEC;
    printf("Total time to sort %d items using Flagged Bubble Sort is: %.0lf\n", arrSize, totalTime);
}

int main() {
    int arr5[ARR_SIZE5];
    int arr5Second[ARR_SIZE5];
    int arr5Third[ARR_SIZE5];

    srand(time(0));
    for (int i = 0; i < ARR_SIZE5; i++) {
        arr5[i] = rand() % 100000;
        arr5Second[i] = arr5[i];
        arr5Third[i] = arr5[i];
    }
    sortBubble(arr5, ARR_SIZE5);
    sortFlagBubble(arr5Second, ARR_SIZE5);
    sortInsertion(arr5Third, ARR_SIZE5);
}
