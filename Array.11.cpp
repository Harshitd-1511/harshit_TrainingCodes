#include<stdio.h>
int main()
{
	int a[]={22,55,99,44,11};
	int i,ele=55,index=1,n=5;
	printf("Array before deletion of %d:\n",ele);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=index;i<=n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	printf("\nArray after deletion of %d:\n",ele);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
