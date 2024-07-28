#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		} 
		j=j++;
		for(j=j-2;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
