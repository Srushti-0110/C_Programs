#include<stdio.h>
#include<conio.h>
int main()
{
   int i=0,j=0,Num=0;

   printf("\n Enter the Num:");
   scanf("%d", &Num);


   printf("--------------------\n");

   for(i=1; i<=Num ; i++)                  //For outer transversal( i th row)
   {
       for(j=1; j<=Num; j++)               //For inner transversal(j th column)
       {
           if(j == 1  || j==Num || j==i )
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
