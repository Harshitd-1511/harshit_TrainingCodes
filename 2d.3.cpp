#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j,n,temp=0;
	n=sizeof(a)/sizeof(a[0]);
	printf("Enter %d elements: \n",n*n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The 2-D matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i-j<0)
			{
				a[i][j]=a[i][j]+a[j][i];
				a[j][i]=a[i][j]-a[j][i];
				a[i][j]=a[i][j]-a[j][i];
			}
		}
	}
	printf("The transpose of the matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
