#include<stdio.h>
#include<stdlib.h>
#define n 100
int a[n],i,val,m=0;
int linear_search(int a[],int b)
{
    for(i=0;i<n;i++)
    {
        if(b == a[i])
        break;
    }
    if(i<n-1)
    printf("\nPosition num : %d",a[i]);
    if(i<n)
    printf("\nIndex num : %d",i);
    else
    printf("\nElement not found..");
}
int main()
{
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
        printf("%d:[%d]\n",i,a[i]);
    }
        printf("\nEnter value for search:");
        scanf("%d",&val);
        linear_search(a,val);
}
