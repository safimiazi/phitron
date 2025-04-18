#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
  long long  int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        sum += num;
    }
    if (sum < 0)
    {
        sum = -sum;
    }

    printf("%lld\n", sum);
}
