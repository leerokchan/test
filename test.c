#include <stdio.h>

int main(void)
{
   int n;
   printf("몇 단 사각형입니까?:");
   scanf("%d", &n);
   for (int i = 1; i <= n; i++)
   {
    for (int j = 1; j <= i; j++)
        printf("*");
        printf("\n");
   }

   return 0;
}
