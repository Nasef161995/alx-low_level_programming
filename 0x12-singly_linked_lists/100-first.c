#include<stdio.h>

/**
 * myStart - Apply the myStart() so that it
 *   is executed before main()
 */
void myStart(void) __attribute__ ((constructor));

/**
 * myStart - implementation of myStart
 */
void myStart(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
