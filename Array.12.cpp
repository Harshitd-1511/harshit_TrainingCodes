#include<stdio.h>
int main()
{
	int a[]={22,44,99,55,88};
	int i,temp=0,n=5;
	printf("Array before left shift: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	i=0;
	temp=a[i];
	for(i=0;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	a[i]=temp;
	printf("\nArray after left shift: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
