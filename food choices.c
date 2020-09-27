#include<stdio.h>

int main()
{
	int c;
	printf("Enter choice:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:printf("Pizza, Rs 239");
		break;
		case 2:printf("Pasta, Rs 179");
		break;
		case 3:printf("Sandwich, Rs 149");
		break;
		case 4:printf("Burger, Rs 129");
		break;
		case 5:printf("French Fries, Rs 99");
		break;
		Default:printf("Enter one of the above choices.");
	}
	return 0;
}
