#include<stdio.h>
int main()
{
	int a,num,i;
	printf("Enter a number: ");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		num=a*i;
		printf("%d x %d = %d\n",a,i,num);
	}
	return 0;
}
