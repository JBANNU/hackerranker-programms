#include<stdio.h>
int main()
{
	int *toys,j,i,n,p,count=0,temp,sum;
	printf("enter number of items");
	scanf("%d",&n);
	printf("enter the price");
	scanf("%d",&p);
	toys=(int)malloc(n*sizeof(int));
	for(i=1;i<=n;i++)
	{
		scanf("%d",toys+i);
	}
	for(i=1;i<n;i++)
	{ 
		for(j=i+1;j<=n-1;j++)
		{
		if(toys[i]>=toys[j])
		{
			temp=toys[j];
			toys[j]=toys[i];
			toys[i]=temp;
			}	
		}
	}sum=0;
	for(i=1;i<=n;i++)
	{ 
			if((sum+toys[i])<p)
			{
			sum=sum+toys[i];
			count++;
		}
		//	printf("%d\n",sum);
	}
	printf("%d",count);
	return 0;
}
