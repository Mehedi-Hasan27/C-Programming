#include<stdio.h>
int main()
{
   char c,uppercase,lowercase;
   scanf("%c",&c);

   if(c>='a' && c<='z')
   {

    lowercase = c-32;
    printf("%c",lowercase);
    
   }
   else 
   {

    uppercase = c+32;
    printf("%c",uppercase);
   }


    return 0;
}