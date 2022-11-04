#include <stdio.h>
#include <stdlib.h>
/**
* main - function that prints it name
* @argc - argc parameter
* @argv - array of a command listed.
* Return: 0 for success
*/
int main(int argc, char *argv[])
{
    int result, num1, num2;

    if (argc != 3)
    {
        printf("%s\n", "Error");
        return (1);
    }
    /* the first argc[0] will contain the file name.*/
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);

    printf("%d\n", result);
    return(0);
}