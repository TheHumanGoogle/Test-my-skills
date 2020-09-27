#include<stdio.h>

int main()
{
	int a;
	printf("Enter marks:");
	scanf("%d",&a);
	if(a>=85 && a<=100)
	
		printf("Grade A");
	
	else if(a>=70 && a<=84)
   
		printf("Grade B");
	
	else if(a>=55 && a<=69)
	
		printf("Grade C");
	
	else if(a>=40 && a<=54)
	
		printf("Grade D");
	
    else if(a<40)
	
		printf("Grade F");
	
	return 0;
}
