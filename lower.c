#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *scores,n1,i,min,count=0,flag=0;
	printf("enter number of sticks:-");
	scanf("%d",&n1);
	scores=(int*)malloc(n1*sizeof(int)); printf("enter the size of sticks:-");
	for(i=1;i<=n1;i++)
	{
		scanf("%d",scores+i);
	}while(1)
	{
	min=scores[1];
	flag=0;
	for(i=1;i<=n1;i++)
	{
		if(scores[i]!=0)
		count++;
	}
	if(count==0)
	 
	  break;
	count=0;
	for(i=1;i<=n1;i++)
	{
		if(scores[i]<min&&scores[i]>0)
		min=scores[i];
		if(min==0)
		min=scores[i];
			if(scores[i]>0)
		flag++;
	}
	for(i=1;i<=n1;i++)
	{
		if(scores[i]!=0)
		scores[i]=scores[i]-min;
		//printf("%d ",scores[i]);
	} //printf("\n");
	if(flag>0)
	printf("%d\n",flag);
}
for(i=1;i<=n1;i++)
{
	if(scores[i]==0)
	count++;
}if(count==n1)
printf("DONE");
}
