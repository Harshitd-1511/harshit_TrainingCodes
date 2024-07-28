#include<stdio.h>
int main()
{
	int count=0,n,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n)
	{
		count++;
		n=n/10;
	}
	printf("The number of digit is %d",count);
	return 0;
}
