#include<stdio.h>
#define n 5
int a[n],top=-1;
void display()
{
    int i;
    for(i=0;i<=top;i++)
    printf("%d",a[i]);
}
int insert()
{
    int val;
    if(top>=n-1)
    printf("array is full..\n");
    else
    {
        printf("\nenter insret array num:");
        scanf("%d",&val);
        top++;
        a[top]=val;
    }
}
 int delete()
{
    if(top<0)
    printf("\narray is empty..\n");
    else
    {
        top--;
    }
} 
int main()
{
   int ch;
   do
   {
    printf("\nt1.insert\n");
    printf("t2.delete\n");
    printf("t3.display\n");
    printf("\nenter your choice:");
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