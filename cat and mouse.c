#include<stdio.h>
int main()
{
    long int catA,i,j,a[100],temp,catB,mouseC,n;
    printf("enter the no of times that the both cat's and mouse to be places:-");
     scanf("%ld",&n);
	for(i=1;i<=n;i++)
    { printf("enter the positions of the catA,catB,and mouseC:-");
    for(j=1;j<=3;j++)
    {
        scanf("%ld",&a[j]);
    }
    if(abs(a[3]-a[1])==abs(a[2]-a[3]))
    {
    printf("Mouse C escapes :)\n hurray!!!!!!!!!!\n");
     }
     else if(abs(a[3]-a[2])<abs(a[3]-a[1]))
     {
         printf("Cat B catches the mouse :) \nbetter luck next time!!!\n ");
     }else if(abs(a[3]-a[2])>abs(a[3]-a[1]))
     {
      printf("Cat A got the mouse :)\nbetter luck next time!!!\n ");
    }
    }return 0;
}
