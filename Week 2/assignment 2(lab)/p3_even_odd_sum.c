#include<stdio.h>
int main()
{
   int n,oddSum=0,evenSum=0;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        evenSum+=a;
    }
    else if(a%2==1)
   {
    oddSum+=a;
   }
   
   }
printf("%d %d",evenSum,oddSum);


    return 0;
}