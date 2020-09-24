#include<stdio.h>

int main()
{
	int a=10,b=20;
	printf("Before swapping: %d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
    printf("\nAfter swapping: %d %d",a,b);
	return 0;	
}	
