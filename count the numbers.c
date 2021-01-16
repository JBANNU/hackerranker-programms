#include<stdio.h>
int main()
{
	int value,keep=0,hunt=0,i,j,a[100],k,count=0,flag=0,first;
	scanf("%d",&first);
	
	for(k=0;k<first;k++)
	{
		printf("enter the value");
	scanf("%d",&value);
	hunt=value;
	keep=value;
	while(value)
	{
		count++;
		value=value/10;
	}
	for(i=0;i<count;i++)
	{
		a[i]=keep%10;
		keep=keep/10;
		//printf("%d ",a[i]);
	}// printf("%d",count);
	for(i=0;i<count;i++)
	{ 
	if(a[i]!=0)
	{
		if(hunt%a[i]==0)
		flag++;
	}
 }
	printf("%d",flag);
	hunt=0;keep=0;flag=0;count=0;
}
	return 0;
}
