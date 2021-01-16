#include<stdio.h>
int main()
{
	char ch[100];
	int i,j,count=0;
printf("enter the string:");
scanf("%[^\n]s",ch);
int l=strlen(ch);
for(i=0;i<l;i++)
{
	for(j=0;j<l;j++)
	{
		if(ch[i]==ch[j])
		{
			count++;
		}
	}
		printf("%c%d",ch[i],count);
	i=i+count-1;
	count=0;
	}	
}
