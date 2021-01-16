#include<stdio.h>
int main()
{
	int n,neg,sum=0,cost,i,ans=0;
	printf("enter the number:");
	scanf("%d",&n);
	int a[n];
	printf("enter the position of value to be neglected:");
	scanf("%d",&neg);
	printf("enter the values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the total cost divided");
	scanf("%d",&cost);
	for(i=0;i<n;i++)
	{
		if(i!=neg)
		sum+=a[i];
	}
	if(sum/2==cost)
	{
		printf("Bon Appetit");
		return 0;
	}else
	 ans=cost-sum/2;
	 printf("difference is %d",ans);
	return 0;
}
