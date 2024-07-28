#include<stdio.h>
int main()
{
	int a[]={2,3,4,5,6};
//	int a[]={22,33,11,44,55};
	int i,flag,n=5;
	for(i=0;i<n-1;i++)	//n-1 iss liye kiya ki last comparision me loop array ke index ke bahar nikal jayega.
	{
		if(a[i]<a[i+1])
		{
			flag=0;
		}
		else{
			flag=1;
			break;	//This statement is must
		}
	}
	if(flag==0)
	{
		printf("The array is sorted");
	}
	else{
		printf("The array is not sorted");
	}
	return 0;
}
