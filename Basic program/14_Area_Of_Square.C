#include<stdio.h>
#include<conio.h>
 int main()
{

   int side, Area;

    printf("\n Enter Side of Square:");
    scanf("%d",&side);

    Area  = side * side;
    printf("\n Area of Square is: %d",Area);


    getch();
    return 0;
}
