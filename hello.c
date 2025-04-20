#include <stdio.h>

int main()
{
    // [1, 2, 3, 4, 5]
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x = 0;
    int y = n - 1;
    while (x < y)
    {

        /* code */
        int tmp = a[x];
        a[x] = a[y];
        a[y] = tmp;
        x++;
        y--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
