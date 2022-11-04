#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* string_nconcat - function that concatenates two strings.
* @s1: patam 1
* @s2: param 2
* @n: param 3
* Return: concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
    unsigned int lght = n, index;
    char *cnc;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";
    for (index = 0; s1[index]; index++)
        lght++;
    cnc = (char *)malloc(sizeof(char) * lght + 1);
    if (cnc == NULL)
        return(NULL);
    lght = 0;
    for (index = 0; s1[index]; index++)
        concat[lght++] = s1[index];
    for (index = 0; s2[index] && index < n; index++)
        cnc[lght] = '\0';
        return(cnc);
}