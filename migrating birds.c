#include<stdio.h>
int main()
{
	int n,i,j,temp,count=0,max=0,flag=0;
	printf("enter the number of birds:");
	scanf("%d",&n);
	int a[n];printf("enter the frequency of birds:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	} printf("\n");
	for(i=0;i<n;i++)
	{ count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			count++;
		}
		flag=count;
		i=i+count-1; 
		if(max>=flag)
		{
			flag=flag;
		}else{
		max=flag;
     	} //printf("%d ",max);
     	flag=0;
	}
	if(n%2==0)
	printf("%d ",a[max]);
	else
	printf("%d ",a[max+1]);
}
