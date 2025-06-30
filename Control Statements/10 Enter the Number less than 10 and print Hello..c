#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter the Number less than 10:");
    scanf("%d",&Num);

    if( Num == 0 )
    {
        printf("\n Zero is Neutral");
    }

    else if( Num < 10)
    {
        printf("\n Hello");
    }

    else
    {
        printf("\n World");
    }

    getch();
    return 0;

}

