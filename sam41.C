#include<stdio.h>
#include<string.h>
void main()
{
   char a[1000];
   int i,n;
   printf("ENTER ANY STRING:\n");
   scanf("%s",&a);
   printf("HOW MANY TIMES THE STRING TO BE PRINTED\n");
   scanf("%d\n",&n);
   for(i=0;i<n;i++)
   {
       printf("%s",a);
   }
   
}
