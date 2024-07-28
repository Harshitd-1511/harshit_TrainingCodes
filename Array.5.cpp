#include<stdio.h>
int main()
{
	int a[20]={10,20,30,40,50,60,70,80,90,100};
	int i,n=10,search;
	printf("Enter the element to search: ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==a[i])
		{
			printf("Element found in %d index",i);
			break;
		}
	}
	if(search!=a[i])
	{
		printf("%d not found",search);
	}
	return 0;
}
