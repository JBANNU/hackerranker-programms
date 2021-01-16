#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	long int n,count=0,i,pos=0,j,ans=0;
	printf("enter the number of clouds");
	scanf("%ld",&n);
	long int a[n];
	printf("enter the clouds should be of 0 or 1 :");
	for(i=0;i<n;i++)
	{
		scanf("%ld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	  if(a[pos+2]==0){
	  pos=pos+2;
	  count++;
	  }
	  else if(a[pos+1]==0){
	  pos=pos+1;
	  count++;
    }
    else{
    	break;
	}
	}
	printf("%ld ",count);
	return 0;
}
