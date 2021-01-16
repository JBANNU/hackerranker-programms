#include<stdio.h>
int main()
{
	int n,c,i,count;
	char p='a',j;
	scanf("%d %d",&n,&c);
	
	for(i=0;i<=n;i++)
	{  count=1;
		for(j='a';j<='z';j++)
		{ if((c>1)&&(count<=c))
		  {
			printf("%c",j);
			count++;
			i++;	
        	}
		}
    }
	 if(c<=1){
		for(i=0;i<n;i++)
		 printf("%c",p);
      	   }
	
	
	return 0;
}
