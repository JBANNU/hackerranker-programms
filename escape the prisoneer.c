#include<stdio.h>
int main()
{
	int n,prisoners,sweets,seat,ans=0,i,value;
	printf("enter the value");
	scanf("%d",&value);
	for(i=0;i<value;i++)
	{
	printf("enter the number of prisoners");
	scanf("%d",&prisoners);
	printf("enter number of sewats");
	scanf("%d",&sweets);
	printf("enter the starting seat");
	scanf("%d",&seat);
	ans=(seat+sweets-2)%prisoners+1;
	printf("%d",ans);
	ans=0;
    }
	return 0;
}
