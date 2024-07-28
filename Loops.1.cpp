#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i<n)
		{
			printf("%d+",i);
			sum=sum+i;
		}
		else{
			printf("%d",i);
			sum=sum+i;
		}
	}
	printf("\n%d is the sum of series",sum);
	return 0;
}
