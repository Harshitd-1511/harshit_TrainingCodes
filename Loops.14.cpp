//the sum of cubes of digits == number ---> armstrong number
#include<stdio.h>
int main()
{
	int n,r,x,s;
	for(n=1;n<=1000;n++)
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
//To get the original number for checking to result for s=s+r*r*r condition,we take a third variable and assign the original value to it.
