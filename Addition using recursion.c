#include<stdio.h>
#include<math.h>
int n;
int SumofDigits(int n)
{
	int sum=0,m;
	while(n>0)
	{
	m=n%10;
	sum=sum+m;
	n=n/10;
   }
   return sum;
}
int main()
{
	int num;
	printf("Input number:");
	scanf("%d",&num);
	n=num;
	printf("Sum of Digits:%d",SumofDigits(n));
	return 0;
}

