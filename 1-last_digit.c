#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print if the number is positive, zero, negative
*
* Description: using the main function
* this programming prints "will assign a random number to the variable n
* Return: 0
*/
int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
1 = n % 10;

if (l > 5)
{
	printf("last digit of %d and is greater than 5\n", n, l);
}
else if (l == 0)
{
	printf("last digit of %d and is 0\n", n, l);
}
else
{
	printf("last digit of %d and is less than 6 and not 0\n", n, l);
}
return (0);
}
