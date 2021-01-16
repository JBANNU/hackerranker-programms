#include<stdio.h>
int main()
{
	int n,k,h[10],d,i,max=0;
	printf("enter number of jumps to be jumped:-");
	scanf("%d",&n);
	printf("enter the assumed max height:-");
	scanf("%d",&k);
	printf("enter the heights of the hurdles to jump:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&h[i]);
	} 
	for(i=0;i<n;i++)
	{
		if(max<h[i])
		max=h[i];
	else
	h[i]=max;
    } printf("the max height of hurdle is :%d \n",max);
    if(max>k)
    {
    	printf("sorry !!!! the height is more than his stamina shit man!!! the doses should given to jump the high hurdle is...:%d\n",max-k);
	}else 
	printf("congo dude.., u won the race!! :)",0);
}
