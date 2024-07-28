#include<stdio.h>
int main()
{
	int i,j,m=1,k,n;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i-1;j++)
		 {
		 	printf(" ");
		 }
		for(k=1;k<=m;k++)
		{
			printf("*");
		}
		printf("\n");
		m++;	//We took m just to print * and in line 18 we are incrementing it, also m ka koi lena dena nhi hai baki ke program se.	
	}
	return 0;
}
