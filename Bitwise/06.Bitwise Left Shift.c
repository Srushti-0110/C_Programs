#include <stdio.h>
#include<conio.h>
int main()
 {
    int No=0 , Res=0;
    
    printf("\n Enter a Number:- ");
    scanf("%d" , &No);
    
    Res = No << 5;
    
    printf("\n Result is %d << 5 = %d",No ,Res);

    getch();
    return 0;
 }   