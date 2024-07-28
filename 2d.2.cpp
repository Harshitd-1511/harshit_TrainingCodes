#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j,n,search,c=0;
	n=sizeof(a)/sizeof(a[0]);
	printf("Enter %d elements: \n",n*n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the element to search: ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(search==a[i][j])
			{
				printf("\nThe element found at index: %d,%d",i,j);
				c++;
				break;
			}
		}
	}
	if(c==0)
	{
		printf("Element not found");
	}
	return 0;
}
