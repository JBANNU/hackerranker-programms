#include<stdio.h>
int main()
{
	int date,month,year,date1,month1,year1,ans=0;
	printf("enter the returned date:");
	scanf("%d",&date);
	printf("enter the returned month:");
	scanf("%d",&month);
	printf("enter the returned year:");
	scanf("%d",&year);
	printf("enter the due date:");
	scanf("%d",&date1);
	printf("enter the due month:");
	scanf("%d",&month1);
	printf("enter the due year:");
	scanf("%d",&year1);
	if(1<=date<=31&&1<=date1<=31&&1<=month<=12&&1<=month1<=12&&1<=year<=3000&&1<=year1<=3000)
	{
	if(date1<date&&month1==month&&year1==year)
	{
		ans=15*(date-date1);
	}
	if(month1!=month&&year1==year)
	{
		ans=500*(month-month1);
	}
	if(year1!=year)
	{
		ans=10000;
	}
	printf("%d",ans);
    }
}
