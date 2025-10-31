#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   void selection(int a[], int n)
   {
      for (int i = 0; i < n - 1; i++){
      int min = i;
      for (int j = i + 1; j < n; j++)
         if (a[j] < a[min])
         min = j;
      swap(int, a[i], a[min]);
         
      }
   }
} 