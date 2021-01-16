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
      else
    {
       odd[k]=h[i];
       printf("%d",i);
     }  } 
  //printf("%s %s",even,odd);
    return 0;
}

