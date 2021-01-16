#include<stdio.h>
int main()
{
	int n,i,j,temp,flag=0,sum=0;
	printf("enter the how many numbers");
	scanf("%d",&n);
	printf("enter the numbers");
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<=a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}/* for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);// it is used to print the numbers in ascending order
	} printf("\n");
	 */int count=1;
	for(i=0;i<n;i++)
	{  
	count=1;
	for(j=i+1;j<n;j++)
	{
			if(a[i]==a[j])
			{
				count++;
			}
     }
     i+=count-1;
	 flag=count/2;
     sum+=flag;
	 flag=0;	
	 
	}
	if(sum)
	{
	printf(" GREAT JOB!!!hurray u found the pairs...........:)\n"); 	printf(" pairs are:%d\n",sum);
}
	else if(sum==0)
	printf("SORRY!!! give better numbers to find the pairs...");
	return 0;
}
