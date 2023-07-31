#include<stdio.h>
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        printf("enter the value a[%d]:",i);
        scanf("%d",&a[i]);
    }
        printf("%d,%d,%d,%d,%d",a[4],a[1],a[2],a[3],a[0]);
}   
