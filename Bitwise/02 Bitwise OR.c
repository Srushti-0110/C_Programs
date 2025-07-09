#include <stdio.h>
#include<conio.h>
int main()
 {
    int No1=0 , No2=0 , Res=0;
    
    printf("\n Enter a Number:- ");
    scanf("%d" , &No1);
    
    printf("\n Enter a Number:- ");
    scanf("%d" , &No2);
    
    Res = No1 | No2 ;
    
    printf("\n Result is = %d",Res);

    getch();
    return 0;
 }   