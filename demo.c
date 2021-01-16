#include<stdio.h>
struct student{
	char name[100];
	int marks;
}student[10];
int main()
{
	int i,j,n,count=0;
	char ch[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter name & marks :");
		scanf("%s%d",student[i].name,&student[i].marks);
	}
	for(i=0;i<n;i++)
	{
		scanf("%s",ch[i]);
	}
	for(i=0;i<n;i++)
	{ 
		for(j=0;j<n;j++)
		{
		if(strcmp(ch[i],student[j].name)==0)
		{
					printf("%s=%d\n",student[j].name,student[j].marks);
					break;
		}
		else
		{
		 count++;
		 if(count==n)
		 {
		printf("user not found\n");
	}
	    }
	   }
	}
}
