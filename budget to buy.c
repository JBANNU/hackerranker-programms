#include<stdio.h>
int main()
{
	int money,k[100],h[100],sum[100][100],i,j,keyboard,hardrive,a=-1;
	printf("enter the budcet:");
	scanf("%d",&money);
	printf("enter the number of keyboards\:"); scanf("%d",&keyboard);
	printf("enter the number of hardives:");scanf("%d",&hardrive);
	 printf("enter the amounts of keyboards:");
	for(i=0;i<keyboard;i++)
	{
		scanf("%d",&k[i]);
	}
	printf("enter the amount of hardrives:");
	for(i=0;i<hardrive;i++)
	{
		scanf("%d",&h[i]);
	}
	for(i=0;i<keyboard;i++)
	{
		for(j=0;j<hardrive;j++)
		{
			sum[i][j]=k[i]+h[j];
		}
	} int max=-1,count=0;
		for(i=0;i<keyboard;i++)
	{
		for(j=0;j<hardrive;j++)
		{
			if(sum[i][j]<=money)
			{
				if(max>sum[i][j])
				count++;
				else
				max=sum[i][j];
			} 
		}
	}if(max!=-1)
	printf("hurray u can buy at %d ruppess",max);
	else
	printf("SORRY !!!!!!it is not in ur budget");
	return 0;
}
