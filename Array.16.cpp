#include<stdio.h>
int main()
{
	int a[]={1,0,1,0,1};
	int k=0,t,i,j,n=5;
	printf("Array before segregation: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
		if(a[i]==0)
		{
			t=a[i];
			for(j=i;j>k;j--)
				a[j]=a[j-1];
			a[k]=t;
			k++;
		}
	printf("\nArray after segregation: \n");
	for(j=0;j<n;j++)
	{
		printf("%d\t",a[j]);
	}	
	return 0;
}
