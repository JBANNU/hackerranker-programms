#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n; printf("enter the number of elements");
    scanf("%d",&n);
    int a[n],occur[n],i,temp,j,count=0;
    printf("enter the numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    } printf("sorted elemets are:");
    for(i=0;i<n;i++)
    {
    	printf("%d ",a[i]);
    } printf("\n");
    for(i=0;i<n;i++)
    {	count=0;
    	for(j=i;j<n;j++)
    	{
    		if(a[i]==a[j])
    		{
    			count++;
			}
		}
		if(count==1)
	{
		printf("%d ",a[i]);
	}
		i+=count-1;
//	printf("%d ",count);
	
	//	i+=count+1;
	  }
	 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

