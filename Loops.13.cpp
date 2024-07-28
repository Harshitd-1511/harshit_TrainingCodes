#include <stdio.h>
int main()
{
	int i,a,p,count; 
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&p);
	printf("The prime numbers are\n");
  	while(a <= p)
  	{
    	count = 0;
    	i = 2;
    	while(i <= a/2)
    	{
    		if(a%i == 0)
      		{
        		count++;
				break;
      		}
      		i++;	
    	}	
    if(count == 0 && a != 1 )
    {
		printf(" %d ", a);
    }
    a++; 
  }
  return 0;
}
