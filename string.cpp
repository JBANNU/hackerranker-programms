#include<stdio.h>
#include<string.h>
int main()
{ int n;
    scanf("%d",&n);
	int i,j,count,length[10];
	char str[10][10];
	for(i=0;i<n;i++)
	{
		scanf("%s",&str[i]);
	    length[i]=strlen(str[i]);
	}
	for(i=0;i<n;i++,printf("\n"))
	{ count=0;
	for(j=0;j<=length[i]-1;j++)
	{
		if(str[i][j]==str[i][j+1])
		count++;
		else
		j++;
	}printf("%d ",count);
}
}
 	

