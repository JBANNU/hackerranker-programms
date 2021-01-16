#include<stdio.h>
avgmarks(int students,char gender)
{ //char gender;
	int i,m[10],sum=0;
	for(i=1;i<=students;i++)
	{
		scanf("%d",&m[i]);
		//printf("%d ",m[i]);
	} 

	if(gender=='b')
	{
		for(i=1;i<=students;i++)
		if(i/2==0)
		{
			sum=sum+m[i];
			//printf("%d ",m[i]);
		}printf("%d",sum);
	} 
	else if(gender=='g')
	{
		for(i=0;i<students;i++)
		if(i/2==1)
		{
			sum=sum+m[i];
		}
	} printf("%d",sum);
}
int main()
{
	int students;
	char gender;
	scanf("%c ",&gender);
	scanf("%d",&students);
	avgmarks(students,gender);
return 0;	
}
