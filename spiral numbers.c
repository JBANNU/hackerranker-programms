#include<stdio.h>
int main()
{
	int a[50][50],j,r=1,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-i;j++)
		a[i][j]=r++;
		for(j=i+1;j<=n-i-1;j++)
		a[j][n-i-1]=r++;
		for(j=n-i-2;j>=i;j--)
		a[n-i-1][j]=r++;
		for(j=n-i-2;j>i;j--)
		a[j][i]=r++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		if(a[i][j]<10)
		{
			printf("%d  ",a[i][j]);
		}else 
		printf("%d ",a[i][j]);
	}printf("\n");
	}return 0;
}
