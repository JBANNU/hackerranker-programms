#include<stdio.h>
#include<string.h>
void avgmarks(int students,char gender)
{ int marks[10],i,sum;

 for(i=0;i<students;i++)
 {
 	scanf("%d",&marks[i]);
 } sum=0;
 //scanf("%c",&gender);
// printf("%c",gender);
  if(gender=='b')
  {
  	for(i=0;i<students;i++)
  	{
  		if((i%2)==0)
  		sum=sum+marks[i];
	  }printf("%d",sum);
  } 
  else if(gender=='g')
  {
  	for(i=0;i<students;i++)
  	{
  		if((i%2)==1)
  		sum=sum+marks[i];
	  }printf("%d",sum);
  } 
 

}
int main()
{
	int students;
	char gender;
scanf("%c",&gender);
		scanf("%d",&students);
	avgmarks(students,gender);
return 0;	
}
