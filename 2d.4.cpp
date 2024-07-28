#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j,n;
	n=sizeof(a)/sizeof(a[0]);
	printf("Enter 9 elements of 1st matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter 9 elements of 2nd matrix: \n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
/*	for sum
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
*/
/*	for product
	for(i=0;i<n;i++)
	{
	
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
		}
	}
*/
/*	for difference
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=a[i][j]-b[i][j];
			}
		}
*/
	printf("\nThe sum of matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
