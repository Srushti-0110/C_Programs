#include<stdio.h>
#include<conio.h>
 int main()
{

   int N1, N2, Multi;

    printf("\n Enter First Number:");
    scanf("%d",&N1);

    printf("\n Enter Second Number:");
    scanf("%d",&N2);

    Multi = N1 * N2;
    printf("\n Multiple of two numbers is %d * %d= %d\n", N1, N2, Multi);


    getch();
    return 0;
}
