#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int n,i;
   char h[100],even[100],a=0,k=0,odd[100];
   scanf("%d",&n);
   scanf("%s",h);
   int l=strlen(h);
   for(i=0;i<=l-1;i++)
   {
       if(i%2==0)
       {
         even[a]=h[i];
         a++;
       }
      else if(i%2!=0)
    {
       odd[k]=h[i];
       k++;
       //printf("%d",i);
     }  } 
     even[a]=odd[k]='\0';//it is for terminating the garbage values and emptying the strings it is must and should
  printf("%s %s",even,odd);
    return 0;
}

