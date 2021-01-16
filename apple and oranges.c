#include<stdio.h>
int main()
{
	int s,t,a,b,m,k[10],n,i,h[10],*y,*z,count=0,flag=0;
	scanf("%d %d",&s,&t);
	scanf("%d %d",&a,&b);
	scanf("%d %d",&m,&n);
	y=(int*)malloc(m*sizeof(int));
	for(i=1;i<=m;i++)
	{
		scanf("%d",&y+i);
			k[i]=a+y[i];
	}
	z=(int*)malloc(n*sizeof(int));
	for(i=1;i<=n;i++)
	{
		scanf("%d",&z+i);
		h[i]=b+z[i];
	}
	for(i=1;i<=n;i++)
	{
		if(k[i]>=s&&k[i]<=t)
		count++;
		if(h[i]>=s&&h[i]<=t)
		flag++;
	}
	printf("%d\n%d",count,flag);
	
}
