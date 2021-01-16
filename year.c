#include<stdio.h>
int main()
{
	int year,day,month=9,sum;
	scanf("%d",&year);
	if(year<=1917)
	{
		if(year%4==0)
		{
			sum=31+29+31+30+31+30+31+31;
		}else 
			sum=31+28+31+30+31+30+31+31;
	}else if(year==1918)
	 {
	 	sum=(31+29+31+30+31+30+31+31)-13;
	 }
	else if(year%4==0&&year%100!=0||year%400==0)
	{
		sum=31+29+31+30+31+30+31+31;
	} else sum=31+28+31+30+31+30+31+31;
	day=256-sum;
	printf("%d.0%d.%d",day,month,year);
}
