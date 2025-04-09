#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {

        printf("%d ", i);
        sum += i;
    }
    printf("sum is = : %d\n", sum);
    return 0;
}