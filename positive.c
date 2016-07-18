#include <stdio.h>
#include <conio.h>
void main()
{
	int number;
	clrscr();
   	printf("Enter a number\n");
	scanf ("%d", &number);
	if (number > 0)
		printf ("%d, is a positive number\n", number);
	else
		printf ("%d, is a negative number\n", number);
}
