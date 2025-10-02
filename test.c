#include <stdio.h>
#include <stdlib.h>

// type형 x값과 y값을 교환
#define swap(type , x, y) do { type t = x; x = y; y = t; } while (0)


void ary_reverse(int a[], int n)
{
   int i;
   for (i = 0; i < n / 2; i++) {
      swap(int, a[i], a[n - i - 1]);
   }
}