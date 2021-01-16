#include<stdio.h>
int main()
{
	int n,a[100],b[100],k[100],i,count=0,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++,count=0)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(count==1)
		{
		b[i]=a[i];
		}
		else k[i]=a[i];
		
}printf("ans without repeated elements::");
for(i=1;i<=n;i++)
{
if(b[i]!=0&&b[i]!=6486784)
 printf("%d " ,b[i]);
 }
 printf("deleted repeated elements are:");
 for(i=1;i<=n;i++)
if(k[i]!=0&&k[i]!=6486784&&(k[i+1]!=k[i]))
 printf("%d " ,k[i]);
}
