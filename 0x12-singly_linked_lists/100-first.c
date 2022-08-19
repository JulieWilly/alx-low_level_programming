#include <stdio.h>

void tortHare(void) __attribute__ ((constructor));

/**
 * tortHare - functio that prints a sentence before the main.
 */
void tortHare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
