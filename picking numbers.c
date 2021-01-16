#include<stdio.h>
int main()
{
	int n,i,j,temp,min;
	printf("enter the total numbers");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	  for(i=0;i<n;i++)
	  {
	  	for(j=1;j<n;j++)
	  	{
	  		if(a[i]>a[j])
	  		{
	  			temp=a[i];
	  			a[i]=a[j];
	  			a[j]=temp;
			  }
		  }
	  }min=a[0];
	  for(i=0;i<n;i++)
	  {
	  		printf("%d ",a[i]);
	  }
	  
	return 0;
}
