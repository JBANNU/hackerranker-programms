#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,*arr,temp,count=0,n;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
          if(arr[i]>arr[j])
          {
              temp=arr[j];
              arr[j]=arr[i];
              arr[i]=temp;
              count++;
          }
        }
    } printf("Array is sorted in %d swaps.\n",count);
    /*for(i=0;i<n;i++)
    {
    	printf("%d ",arr[i]);
	}*/
    printf("first element:%d\n",arr[0]);
    printf("last element:%d",arr[n-1]);
}
