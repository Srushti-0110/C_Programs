#include <stdio.h>
#include<conio.h>
int main()
 {
    int No=0 , Res=0;
    
    printf("\n Enter a Number:- ");
    scanf("%d" , &No);
    
    Res = No>> 4 ;
    
    printf("\n Result is %d >>4 = %d",No ,Res);

    getch();
    return 0;
 }   