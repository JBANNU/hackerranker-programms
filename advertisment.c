#include<stdio.h>
int main()
{
	int n,ans=0,i,k;
	printf("enter the number");
	scanf("%d",&n);
	k=5;
	for(i=1;i<=n;i++)
	{
		ans=ans+(k/2);
		k=(k/2)*3;
	}
	printf("%d",ans);
}
