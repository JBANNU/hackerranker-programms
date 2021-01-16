#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],st[10];
	scanf("%[^\n]s",&str);
	for(int i=0;i<=strlen(str)-1;i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			str[i]=str[i]+32;
			printf("%c",str[i]);
		} 
		else if(str[i]>='a' && str[i]<='z')
		{
			str[i]-=32;
			printf("%c",str[i]);
		}
	
	}

}
