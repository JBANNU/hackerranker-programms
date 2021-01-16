#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100],n,d,i,count,j,temp,meanodd,ans,flag=0,meaneven,p=1;
//	printf("enter how many numbers");
	scanf("%d",&n);
		scanf("%d",&d);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
//	printf("enter upto number");

	count=0;
	ans:
		if(count<=n-d)
		{
	for(i=1+count;i<=d+count;i++)
	{
		for(j=i+1;j<=d+count;j++)
		{
			if(a[i]>=a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	} //for(i=1+count;i<=d+count;i++)
	//{
	//	printf("%d ",a[i]);
    //}printf("\n");
		//printf("%d ",a[d+count]); 
		for(i=1+count;i<=d+count;i++)
		{
		if(d%2==0)
		{
			if((a[d/2]%2==0)&&(a[d/2+1]%2==0)||((a[d/2]%2)!=0)&&(a[d/2+1]%2!=0))
			{
				meaneven=((a[d/2]+a[d/2+1])/2);
				//printf("%d",meaneven);
				ans=2*meaneven;
	    if(a[d+count]<ans)
	    {
	    	flag++;
		} count++;
		 goto ans;
			}else if(((a[d/2]%2)!=0)&&(a[d/2+1]%2==0)||(a[d/2]%2==0)&&(a[d/2+1]%2!=0))
			{
				meaneven=((a[d/2]+a[d/2+1])/2);
				//printf("%d",meaneven);
				ans=2*meaneven;
	    if(a[d+count]<ans)
	    {
	    	flag++;
		} count++;
		 goto ans;
			}
	    }else if((i>=0+count)&&d%2!=0)
	    { for(i=1+count;i<=d+count;i++)
	    {
		meanodd=a[(n-d)+count+1/2];
	      // printf("%d ",meanodd);
	     //  meanodd=0;
		ans=2*meanodd;
	    if(a[d+count+1]<ans)
	    {//printf("%d ",a[d+count+1]);
	    flag++;
		}
		 count++;meanodd=0;
		 goto ans;
	    } }
		}
		}printf("%d",flag);
	return 0;
}
