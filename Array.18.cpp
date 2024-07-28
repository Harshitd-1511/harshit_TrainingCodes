#include<stdio.h>    
int main()    
{    
    int a[]={1,2,3,4,5};     
    int i,j,n,size=5,temp;
	printf("Enter the no. of places to left rotate: ");
	scanf("%d",&n);    
    printf("Array before left rotation: \n");    
    for (i=0;i<size;i++) {     
        printf("%d\t",a[i]);     
    }      
    for(i=0;i<n;i++){    
        temp=a[0];    
        for(j=0;j<size-1;j++){    
            a[j]=a[j+1];    
        }    
        a[j]=temp;    
    }    
    printf("\n");    
    printf("Array after left rotation: \n");    
    for(i=0;i<size;i++){    
        printf("%d\t",a[i]);    
    }    
    return 0;    
}  
