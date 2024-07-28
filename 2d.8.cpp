#include<stdio.h>
int main()
{
	int a[10][10];
	int i,j,n;
	printf("Enter the size of matrix (<=10): ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j-i==-1)
			{
				printf("\nEnter the value for index %d,%d: ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j-i==-1)
			{
				printf("%d  ",a[i][j]);
			}
			else{
				printf("0  ");
			}
		}
		printf("\n");
	}
	return 0;
}
