#include<stdio.h>
int main()
{
   int n,result;

   scanf("%d",&n);
   result = n/1000;

   if(result%2==0)
   {

    printf("EVEN\n");
   }
else
{


    printf("ODD\n");
}


    return 0;
}