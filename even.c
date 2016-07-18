#include <stdio.h>
 
int main()
{
   int a;
 
   printf("Enter an integer\n");
   scanf("%d", &a);
 
   if (a & 1 == 1)
      printf("its Odd\n");
   else
      printf("its Even\n");
 
   return 0;
}
