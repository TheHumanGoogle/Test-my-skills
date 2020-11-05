#include<stdio.h>
int main()
{
	int test[3][3];
	int i,j,row,col,sum=0;	
	 printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d%d",&row,&col);
	printf("Enter the elements here: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&test[i][j]);
		}
	}
	 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",test[i][j]);
  }
 printf("\n\n");
 for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+test[i][j];
            }
        }
    }
 
    printf("The sum of diagonal elements of a square matrix = %d\n",sum);
    return 0;
}

