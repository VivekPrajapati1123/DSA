#include<stdio.h>
#define n 5
int f = -1,r = -1;
int a[n],val;
int display()
{
    for(int i=f;i<=r;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int insert()
{
    if(r>=n-1)
    printf("Queue is full...\n");
    else if(r<0)
    {
        f = r = 0;
        a[r]=val;
    }
    else 
    {
        printf("\nEnter insert queue num:");
        scanf("%d",&val);
        r++;
        a[r]=val;
    }
}
int delete()
{
    if(f<0)
    printf("\nQueue is empty...\n");
    else if(f<0)
    {
        f = r = -1;
        a[r]=val;
    }
    else
    {
       f++;
    }
}
int main()
{
    int ch;
    do
{
    printf("\n1.Insert\n");
    printf("2.Delete\n");
    printf("3.Display\n");
    printf("\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
                 insert();
                 break;
        case 2:
                 delete();
                 break;
        case 3:
                printf("\nQueue is:");
                display();
                break;
        case 0:
                break;
        default:
                printf("\nwrong choice..");
                break;
    }
}
      while(ch!=0);
}