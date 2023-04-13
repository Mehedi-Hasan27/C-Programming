#include<stdio.h>
int main()
{
   long long int eye,mouth,body,a,b,c,d,e,f,g,h;
   scanf("%lld%lld%lld",&eye,&mouth,&body);

   if(eye==0||body==0)
   {
    printf("0");
   }
   else if(mouth>=0)
   {
    a=mouth;//mouth count
    if(eye>0)
    {
        b=eye-mouth;//eye count if positive
        d=body-mouth;//body count if positive
        if(b/2==d)
        {
            e=a+d;
            printf("%d",e);

        }
    }
    else if(eye<0)
    {
        c=eye+mouth;//eye count if negative
        f=body+mouth;//same
        if(c/2==f)
        {
            g=b+f;
            printf("%d",g);
        }

    }

   }






    return 0;
}