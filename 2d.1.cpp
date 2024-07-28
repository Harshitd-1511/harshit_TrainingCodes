#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j,n;
	n=sizeof(a)/sizeof(a[0]);
	printf("Enter %d elements: \n",n*n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nThe 2-D matrix: \n");
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
