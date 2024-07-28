//BUBBLE SORT PROGRAM
#include<stdio.h>
int main () 							
{
	int a[]={99,88,77,66,55,44};	  
	int i,j,flag,temp=0,n=6;
	printf("Array before sorting:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	for (i=0;i<n-1;i++)	    		 
	{ flag =0;
	
		for (j=0;j<n-1-i;j++)		
		{ 
			if (a[j]>a[j+1])
			{
				temp=a[j];            
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;			 
			}
		} 

	if (flag == 0)		
	break;
	}
printf("\nArray after sorting:\n");
for (i=0 ; i<n ; i++)	
printf("%d\t",a[i]);
return 0;
}
//PROGRAM FOR INSERTION SORT
#include<stdio.h>
int main()
{
	int a[]={15,23,91,70,86,5};
	int i,j,key=0,n=6;
	printf("Array before sorting:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	for (i=1;i<n;i++)	
	{
		key=a[i];
		j=i-1;
	while(j>=0&&a[j]>key)
	{
		a[j+1]=a[j];
		j--;	
	}
		a[j+1]=key;
	}
	printf("\nArray after sorting:\n");
	for(i=0;i<n;i++)	
	printf("%d\t",a[i]);
	return 0;
}
//PROGRAM FOR SELECTION SORT	
#include<stdio.h>				
int main()
{
	int a[]={15,23,91,70,86,5};
	int i,j,min,temp=0,n=6;
	printf("Array before sorting:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	for(i=0;i<n-1;i++)
	{
		min=i;				
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
			{
				min=j;		
			}
		}
		if(a[min]!=a[i])	
		{						 
			temp=a[i];		
			a[i]=a[min];
			a[min]=temp;
		}
	}
	printf("\nArray after sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}


