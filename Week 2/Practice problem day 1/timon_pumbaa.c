#include<stdio.h>
int main()
{
   int a,b,sub;
   scanf("%d%d",&a,&b);

   if(a-b>0||a-b==0)
   {
    sub=a-b;
    printf("%d\n",sub);
   }
   else
   {
      printf("0\n");
   }




    return 0;
}