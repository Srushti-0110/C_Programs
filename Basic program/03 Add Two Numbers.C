#include<stdio.h>
#include<conio.h>
 int main()
{

   int N1, N2, sum;

    printf("\n Enter First Number:");
    scanf("%d",&N1);

    printf("\n Enter Second Number:");
    scanf("%d",&N2);

    sum = N1 + N2;
    printf("\nAddition of two numbers is %d + %d= %d\n", N1, N2, sum);


    getch();
    return 0;
}
