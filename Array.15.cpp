#include<stdio.h>
int main()
{
	int a[]={22,33,44,55,66};
	int i,n=5,temp=0;
	for(i=1;i<=n;i++)
	{
		temp=a[n-i];
		a[i]=temp;
		a[i]=a[i+1];
	}
	printf("Array after reversing: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
