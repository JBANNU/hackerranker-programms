#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 int main()
{
     int n,count=0,up=0,flag=0,i,p=0;
    char a[1000000];
    //printf("enter number:");
    scanf("%d",&n);
    //printf("enter the string");
    scanf("%s",a);
        for(i=0;i<n;i++)
        {
            if(a[i]=='U')
            {
            //    up++;
                ++count;
                //printf("%d ",count);
            }
             if(a[i]=='D')
            {
                count--;
                flag++;
                //printf("%d ",count);
            }
            if(count==0&&a[i]=='U')
            {
                //printf("flag:%d\n",flag);
                flag=0;
                p++;
            } 
        } 
        printf("%d",p);
}
