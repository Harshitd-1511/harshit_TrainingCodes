#include<stdio.h>
int main()
{
	int n,r,x,s;
	for(n=1;n<=160;n++)
	{
		s=0;
		x=n;
		while(x!=0)
		{
			r=x%10;
			s=s+r*r*r;
			x=x/10;
		}
	if(s==n)
	printf("%d is Armstrong number\n",n);
	}
	return 0;
}
