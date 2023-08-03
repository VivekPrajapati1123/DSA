#include <stdio.h>
#define n 10
int F = -1, R = -1;
int A[n];
int Display()
{
    if ( (R < 0 ) || (F < 0) )
    {
        printf("\t \n Queue is Empty ... \n ");
    }
    else
    {
        for (int i = F; i <= R ; i++)
            printf("%d  ", A[i]);
    }
}
int InsertVal(int Val)
{
    if (R >= n - 1)
    {
        printf("\t \n Queue is full..... \n ");
    }
    else if (R < 0)
    {
        F = R = 0;
        A[R] = Val;
    }
    else
    {
         for(int i=n-1;i>=0;i--)
            A[i]=A[i-1];
        
        A[0] = Val;
        R++;
    }
}
int DeleteVal()
{
    if (R < 0)
    {
        printf("\t \n Queue is Empty... \n ");
    }
    else if (F == R)
    {
        F = R = -1;
    }
    else
    {
        R--;
    }
}
int F_insertVal(int Val)
{
    if (R >= n - 1)
    {
        printf("\t \n Queue is full.... \n ");
    }
    else if (R < 0)
    {
        F = R = 0;
        A[R] = Val;
    }
    else
    {
        R++;
        A[R] = Val;
    }
}
int F_deleteVal()
{
    if (F < 0)
    {
        printf("\t \n Queue is Empty... \n ");
    }
    else if (F == R)
    {
        F = R = -1;
    }
    else
    {
        F++;
    }
}
int main()
{
    int ch , m ; 
    printf("\n1.Insert ");
    printf("\n2.Delete ");
    printf("\n3.LastInsert ");
    printf("\n4.LastDelete ");
    printf("\n9.Display Queue ");
    printf("\n0.Exit \n");
	do
     {
        printf("\nENTER CHOICE : ");
        scanf("%d",&ch);
        switch(ch)
        {
         case 1: 
                printf("\n\t Enter FI Val : ");
                scanf("%d",&m);
                F_insertVal(m);
                break;
        case 2: 
                printf("\n\t Enter LI Val : ");
                scanf("%d",&m);
                InsertVal(m);
                break;
         case 3: 
                printf("\n\t Enter LI Val : ");
                scanf("%d",&m);
                InsertVal(m);
                break;
         case 4: 
                F_deleteVal();
                break;
         case 9: 
		        printf(" \n \t ");
                Display();
			    printf("\n");
                break; 
         case 0:
                 break; 
                 default :  
                 printf(" \n \t Enter valide input ");
                 break;    
        }
    } 
    while (ch!=0); 
}