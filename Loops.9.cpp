#include<stdio.h>
int main()
{
	int n,r,s;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	printf("The reverse digit is %d",s);
	return 0;
}
