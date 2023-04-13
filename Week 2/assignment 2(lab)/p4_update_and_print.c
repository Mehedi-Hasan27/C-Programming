#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }


    int a,b;
    scanf("%d%d",&a,&b);
    arr[a]=b;


for(int j=n-1;j>=0;j--)
{
    printf("%d ",arr[j]);
}


}