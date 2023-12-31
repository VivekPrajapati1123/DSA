#include<stdio.h>
#include<stdlib.h>
int n;
void display(int a[])
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
void quick_sort(int a[],int first,int last)
{
    int i,j,swap,pivot;
    if(first<last)
    {
        display(a);
        pivot=first;
        i=first,j=last;
        while(i<j)
        {
            while(a[i]<a[pivot] && i<last)
            i++;
            while(a[j]>a[pivot])
            j--;
            if(i<j)
            {
                swap=a[pivot];
                a[pivot]=a[j];
                a[j]=swap;
            }
        }
            quick_sort(a,first,j-1);
            quick_sort(a,j+1,last);
       }
    }
        int main()
       {       
               int a[10],i;             
               printf("How many element enter:");
               scanf("%d",&n);
               for(i=0;i<n;i++)
               a[i]=rand()%100+1;
               quick_sort(a,0,n-1);
               printf("\nAfter quick sort:");
               display(a);                  
        }
    
