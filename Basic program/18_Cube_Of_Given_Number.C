#include<stdio.h>
#include<conio.h>
 int main()
{

   int Num, cube;

    printf("\n Enter Number:");
    scanf("%d",&Num);

    cube  = Num * Num * Num;
    printf("\n Square of given number is: %d",cube);


    getch();
    return 0;
}
