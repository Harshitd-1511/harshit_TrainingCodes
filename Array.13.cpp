#include<stdio.h>
int main()
{
	int a[]={54,56,87,22,25};
	int i,n=5,temp=0;
	printf("Array before removing 87: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	i=0;
	temp=a[i+2];
	a[i+2]=a[i];
	a[i]=temp;
	printf("\nArray after placing 87: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
