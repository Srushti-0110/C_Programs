#include<stdio.h>
#include<conio.h>
int main()
{
   int i=0, j=0, R=0, C=0, k=0;

   printf("\n Enter the Row:");
   scanf("%d", &R);
   printf("\n Enter the Column:");
   scanf("%d", &C);


   printf("--------------------\n");

   for(i=1; i<=R ; i++)                  //For outer transversal( i th row)
   {
       for(j=1; j<=C; j++)               //For inner transversal(j th column)
       {
          printf("  %d  ", i*j);
       }

    printf("\n");
   }

   printf("---------------------\n");

   getch();
   return 0;


}
