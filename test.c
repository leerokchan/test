#include <stdio.h>

int main(void)
{
    int sum=0;

    puts("1부터 n까지의 총합을 구합니다.");

    printf("n의 값: ");
    scanf("%d", &n);

    int sum = 0;
    int i = 1;

    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("1부터 %d까지의 총합은 %d입니다.\n", n, sum);

    return 0;
}