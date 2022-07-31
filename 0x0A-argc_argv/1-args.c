#include <stdio.h>

/**
* main - function that prints it name
* @argc - argc parameter
* @argv - array of a command listed.
* Return: 0 for success
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
    printf("%d\n", argc - 1);
    return(0);
}