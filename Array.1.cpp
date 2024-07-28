#include<stdio.h>
int main()
{
	int a[20];
	int i,n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("\nEnter %d elements: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe %d elements entered are: \n",n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
