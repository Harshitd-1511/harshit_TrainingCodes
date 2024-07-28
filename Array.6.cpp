#include<stdio.h>
int main()
{
	int a[20]={10,22,45,89,44};
	int n=5,i,max=a[0],min=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("The max is %d and min is %d",max,min);
	return 0;
}
