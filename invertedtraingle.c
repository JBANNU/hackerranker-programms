#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter the size of the traingle:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<n-i;j++)
	
			printf(" ");
	
		for(k=i;k<=2*i-1;k++)
	
			printf("*");
	
		for(k=1;k<=i-1;k++)
	
			printf("*");
	printf("\n");
	}

}
