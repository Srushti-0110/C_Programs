#include<stdio.h>
#include<conio.h>

int main()
{
    int Num=0;

    printf("\n Enter Year:");
    scanf("%d",&Num);

    if(Num < 999 || Num > 9999)
    {
        printf("\n Invalid Year");
    }
    else if( Num % 4== 0)
    {
        printf("\n Year is leap year");
    }
    else
    {
        printf("\n Year is not leap year");
    }

    getch();
    return 0;

}
