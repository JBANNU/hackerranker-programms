#include<stdio.h>
int main()
{
	int n;
	printf("enter the number n");
	scanf("%d",&n);
	int a[n],k[n],i,j;
	printf("enter the values");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
	{
		if(i==a[j])
		{
			k[i]=j;
		}	
	}	
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
	{
		if(k[i]==a[j])
		{
		   printf("%d\n",j);
		}	
	}
		
	}
	return 0;
}
