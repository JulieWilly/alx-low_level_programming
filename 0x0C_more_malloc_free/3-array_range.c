#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* array_range - function that creates an array of integers.
* @min: param minimum
* @max: param maximum
* Return: pointer to the create array.
*/
int *array_range(int min, int max)
{
    int *arr, index, size;

    if (min > max)
        return(NULL);
    size = max - min + 1;
    arr = (int *)malloc(sizeof(int) * size);
    if (arr == NULL)
        return(NULL);
    for (index = 0; index < size; index++)
        arr[index] = min++;
    return (arr);
}