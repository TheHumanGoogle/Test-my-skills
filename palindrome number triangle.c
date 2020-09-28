#include <stdio.h>
int main()
{
int i, j, k, space, n;
scanf("%d", &n);
printf(" ");
for (i=1; i<=n; i++)
{

for (j=1; j<=n-i; j++)
printf(" ");

for (j=1,k=2*i-1; j<=2*i-1; j++,k--)
{
if (j <= k)
printf("%d", j);
else
printf("%d", k);
}
printf("\n" );

printf(" ");

}
return 0;
}
