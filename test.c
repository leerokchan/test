#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while(0)

/*-- 배열을 나누는 함수 --*/
void partition(int a[], int n)
{
   int pl = 0;               // 왼쪽 커서
   int pr = n - 1;          // 오른쪽 커서
   int x = a[n / 2];       // 피벗(가운데 요소)
   do {
      while (a[pl] < x) pl++;
      while (a[pr] > x) pr--;
      if (pl <= pr){
         swap(int, a[pl], a[pr]);
         pl++;
         pr--;
      }
   } while (pl <= pr);
   printf("피벗의 값은 %d입니다.\n", x);
   printf("피벗 이하의 그룹\n");
   for (int i = 0; i <= pl - 1; i++)
      printf("%d ", a[i]);
   putchar('\n');
   if (pl > pr + 1)
   {
      printf("피벗과 일치하는 그룹\n");
   }
   for문
}