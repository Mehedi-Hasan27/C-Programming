#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);

   if(n==0||n<0)
   {
    for(int i=n;i<=1;i++)
    {
        printf("%d ",i);
    }
   }
   else if(n>0)
   {
    for(int j=1;j<=n;j++)
    {
        printf("%d ",j);
    }


   }



    return 0;
}