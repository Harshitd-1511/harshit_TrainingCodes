#include<stdio.h>
int main()
{
	int a[]={1,2,2,2,5};
	int i,k,j=i+1,n=5;
	while(j<n)
	{
		if(a[i]!=a[j])
		{
			a[i+1]=a[j];
			i++;
		}
		j++;
	}
	for(k=0;k<=i;k++)
	printf("%d\t",a[k]);
	return 0;	
}
