#include<stdio.h>
#include<conio.h>

int main()

{
    int Value[7],i;

    for(i=0; i<7; i++)
    {
        printf("\n Enter The Element:- ",i++);
        scanf("%d",&Value);
    }

    getch();
    system("cls");

    for(i=0; i<7; i++)
    {
        printf("\n Value of Element:- %d",i++);
    }



    getch();
    return 0;
}
