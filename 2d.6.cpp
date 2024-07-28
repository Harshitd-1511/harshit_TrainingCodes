#include<stdio.h>
int main()
{
	int a[3][3];
	int i,n,j;
	printf("Enter the size of matrix: ");
	scanf("%d",&n);
	printf("The identity matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i-j==0)
			printf("1  ");
			else
			printf("0  ");
		}
		printf("\n");
	}
	return 0;
}
