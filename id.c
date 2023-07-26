#include<stdio.h>
#define n 5
int a[n],top=-1;
void display()
{
    int i;
    for(i=0;i<=top;i++)
    {
       printf("%d",a[i]);
    }
}
int first_insert()
{
    int val;
    if(top>=n-1)
    printf("array is full..\n");
    else if(top<0)
    {
        printf("your insert num:");
        scanf("%d",&val);
        top++;
        a[top]=val;        
    }
    else
    {
        printf("your insert num:");
        scanf("%d",&val);
        top++;
         for(int i=top;i>=0;i--)
         {
          a[i]=a[i-1];
         }
          a[0]=val;
    }
}
 int first_delete()
{
    if(top<0)
    printf("\narray is empty..\n");
    else
    {
        for(int i=0;i<top;i++)
        {
            a[i]=a[i+1];
        }
        top--;
    }
} 

int main()
{
   int ch;
   do
   {
     printf("\n1.first_insert\n");
     printf("2.first_delete\n");
     printf("3.display\n");
     printf("\nenter your choice:");
     scanf("%d",&ch);
     switch(ch)
      {
        case 1:
        first_insert();
        break;
        case 2:
        first_delete();
        break;
        case 3:
        printf("\n array is:");
        display();
        break;
        case 0:
        break;
        default:
        printf("\nchoice valid num..\n");
        break;
      }
   }
   while(ch!=0);
}