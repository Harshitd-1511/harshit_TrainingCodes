#include<stdio.h>
int main()
{
	int a[20];
	int i,n,prod=1;
	
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		prod=prod*a[i];
	}
	printf("\nThe product of array is %d",prod);
	return 0;
}
