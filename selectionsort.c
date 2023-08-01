#include<stdio.h>
#include<stdlib.h>
#define n 20
int a[n];
int selection_sort()
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}
int main()
{
    int i;
    for(i=0;i<n;i++)
    a[i]=rand() % 20 + 1;
    printf("Random array is : \n");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    selection_sort();
    printf("\nsorted array is : \n");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}