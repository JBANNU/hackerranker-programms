#include<stdio.h>//problem is about growing the tress in 2 cycles i.e in summer doubles and spring +1 meters
int main()
{
	int n,h[100],a[100],j,i;
	printf("enter how many years:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=60;i++)//as the constraints in hacker ranker are upto 0 to 60
	{
		h[0]=1;
		if(i%2!=0)
		{
		  h[i]=h[i-1]*2;
		  //printf("%d ",h[i]);	
		}
		else
		h[i]=h[i-1]+1;
		//printf("%d ",h[i]);
	}
	printf("the heights of trees are:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<=60;j++)
		{
			if(j==a[i])
			printf("%d ",h[j]);
		} 
		
	}
	return 0;
}
