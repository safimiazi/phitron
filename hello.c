#include <stdio.h>
int main()
{
int n ;
scanf("%d", &n);
int a[n];
int sum;
for (int i = 0; i < n; i++)
{
    /* code */
    scanf("%d", &a[i]);
    sum += a[i];
}
printf("%d", sum);


 
}
