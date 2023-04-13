#include<stdio.h>
int main()
{
   char c;
   scanf("%c",&c);
   if(c>='a' && c<='y')
   {
    c++;
    printf("%c\n",c);
   }
   else if(c=='z')
   {
    printf("a\n");
   }



    return 0;
}