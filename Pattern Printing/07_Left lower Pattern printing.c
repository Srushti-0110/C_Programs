#include<stdio.h>
#include<conio.h>
int main()
{
   int i=0,j=0,RC=0;

   printf("\n Enter the Row and Column:");
   scanf("%d", &RC);


   printf("--------------------\n");

   for(i=1; i<=RC ; i++)                  //For outer transversal( i th row)
   {
       for(j=1; j<=RC; j++)               //For inner transversal(j th column)
       {
           if(i>=j)
           {
              printf(" * ");
           }
           else
           {
              printf("   ");
           }
       }
    printf("\n");
   }

   printf("---------------------\n");

   getch();
   return 0;


}
