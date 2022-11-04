#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - function that allocates memory using malloc.
* @b: param
*/
void *malloc_checked(unsigned int b)
{
    void *d;

    d = malloc(d);
    if (d ==NULL)
    {
        exit(98);
    }
    return(d);
}