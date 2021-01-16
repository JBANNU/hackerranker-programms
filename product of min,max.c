#include<stdio.h>
int main()
{
	int i,a[100],j,temp,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=1;i<=n;i++)
    {
    	for(j=i;j<=n;j++)
    	{
    		if(a[i]>a[j])
    		{
    		temp=a[i];
    		a[i]=a[j];
    		a[j]=temp;
    	}
		}
	}
	 
	printf("product of max and min:%d ",a[1]*a[n]);
}
