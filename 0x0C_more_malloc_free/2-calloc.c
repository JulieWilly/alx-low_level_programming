#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocates memory to an array.
* @nemb: param 1
* @size: param 2
*/
void *_calloc(unsigned int nmemb, unsigned int size);
{
    void *memo;
    char *str;
    unsigned int index;

    if (nmemb == 0 || size == 0)
        return (NULL);
    memo = malloc(size * nmemb);
    if (memo == NULL)
        return(NULL);
    str = memo;
    for (index = 0; index < (size * nmemb); index++)
    {
        str[index] = '\0';
    }
    return (memo);
}