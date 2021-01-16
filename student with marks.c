#include<stdio.h>
 struct student {
 	int marks;
 	char name[100][100];
 }st[20],temp;
 int main()
 {
 	int n,i,j,student[100];
 	printf("enter no of students");
 	scanf("%d",&n);
 	priintf("enter student with marks");
 	for(i=0;i<n;i++)
 	{
 		scanf("%s %d",st[i].name,&st[i].marks);
	 }
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(st[i].marks<st[j].marks)
			{
			temp=st[j];
			st[j]=st[i];
			st[i]=temp;	
			} else if(st[i].marks==st[j].marks)
			{
				if(st[i].name[i][i]>st[i].name[j][i])
				{
						temp=st[j];
						st[j]=st[i];
						st[i]=temp;	
				}
				
			}
		} 
	} printf("students with highest marks :-");
	for(i=0;i<n;i++)
	{
		printf("%s %d\n",st[i].name,st[i].marks);
	}
 }
