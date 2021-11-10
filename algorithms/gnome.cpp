#include "algorithms.h"

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void gnomeSort(int arr[])
{
    int n = sizeof *arr / sizeof(int);
    int index = 0;
 
    while (index < n) {
        if (index == 0)
            index++;
        if (arr[index] >= arr[index - 1])
            index++;
        else {
            swap(&arr[index], &arr[index - 1]);
            index--;
        }
    }
    return;
}