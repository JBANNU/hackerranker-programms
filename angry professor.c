// angry professor students enetring the clazz on time if he expects the no of students more than he expect the class will continue or else cancleed 
#include<stdio.h>
int main()
{
	int j,f;
	scanf("%d",&f);	
	for(j=0;j<f;j++)
	{ 
	int n,*arr,i,k,count=0;
	printf("enter the number of students:-");
	scanf("%d",&n);
	printf("enter the expected value that the students are enter on time:-");
	arr=(int*)malloc(n*sizeof(int));
	printf("enter the students arrvial time it can be -ve also:-");
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
		if(arr[i]>=0)
		count++;
	}
	if(k>count)
	printf("clazz cancled:)");
	else
	printf("NO sit in the clazz !!!!!!!:/\");
}
return 0;
}
