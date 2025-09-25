#include <stdio.h>

#define N 5
int main()
{
   int foo[N];
   for (int i = 0; i < N; i++) {
      printf("foo[%d] : ", i);
      scanf("%d", &foo[i]);
   }
   puts("각 요소의 값");
   for (int i = 0; i < 3; i++) {
      printf("foo[%d] = %d\n", i, foo[i]);
   }

   return 0;
}

#include <stdio.h>
int main()
{
   int a[5] = {1, 2, 3, 4, 5};
   int na = sizeof(a) / sizeof(a[0]);
   printf("배열 a의 요소 개수는 %d입니다.\n", na);

   for (int i = 0; i < na; i++) {
      printf("a[%d] = %d\n", i, a[i]);
   }
   return 0;
}