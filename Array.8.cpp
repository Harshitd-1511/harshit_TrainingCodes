#include<stdio.h>
int main()
{
	int a[20]={10,22,45,89,44};
	int n=5,i,max=a[0],min=a[0],max2,min2;
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max2=max;
			max=a[i];
		}
		else if(max2<a[i])
		{
			max2=max;
		}
		if(min>a[i])
		{
			min2=min;
			min=a[i];
		}
		else if(min2>a[i])
		{
			min2=a[i];
		}
	}
	printf("The value of 2nd max is %d and 2nd min is %d",max2,min2);
	return 0;
}
