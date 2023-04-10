#include<stdio.h>
#include<limits.h>
int main()
{
   int a,b,max=INT_MIN,min=INT_MAX;
   scanf("%d\n",&a);
   for(int i=0;i<=a;i++)
   {
    scanf("%d",&b);
    if(b>max)
    {
        max=b;
    

    }
    if(b<min)
    {


        min=b;
    }
    
   }
   printf("max: %d\nmin: %d\n",max,min);



    return 0;
}