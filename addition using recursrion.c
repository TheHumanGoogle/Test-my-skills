#include<stdio.h>
#include<conio.h>

int SumofDigits(int num);

int main()
{
	int num,sum;
	printf("Input number: ");
	scanf("%d",&num);
	sum=SumofDigits(num);
	printf("Sum of digits:%d",sum);
	return 0;
}

int SumofDigits(int num)
{
if (num==0)
return 0;
else if(num!=0)
return((num%10)+SumofDigits(num/10));
}
