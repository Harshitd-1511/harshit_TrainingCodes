#include<stdio.h>
int main()
{
	int a[10]={2,6,7,9,11,12,3};
	int i=0,j,n=7,ele=10,index=3;
	printf("Array before insertion: \n");
	for(i=0;i<=n;i++)
	printf("%d\t",a[i]);
	while(i<=index)
	{
		i++;
	}
	index=ele;
	n++;
	printf("\nArray after insertion: \n");
	for(i=0;i<=n;i++)
	printf("%d\t",a[i]);
	return 0;
}
