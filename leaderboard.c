#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[100][100],i,j,min,n;
scanf("%d",&n);
	for(i=0;i<1;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
			min=a[0][0];
	for(i=0;i<1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(min>a[i+1][j])
			{
				min=a[i+1][j];
				}else
				{
				a[i+1][j]=min;
				}
      }
   }
	printf("%d\n",min); 
	for(i=0;i<1;i++)
	  {
	  	for(j=0;j<n;j++)
	  	{
	  		a[i][j]=a[i][j]-min;
	  		printf("%d ",a[i][j]);
		  }
	  }
	
}
