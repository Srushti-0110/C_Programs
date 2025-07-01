#include <stdio.h>
#include<conio.h>
int main()
 {
    float Number=0.0,Cube=0.0;
    
    printf("\n Enter a Number- ");
   
    scanf("%f" , &Number);
    
    Cube = Number * Number * Number;
    
    printf("\n Give Cube is :- %f\n", Cube);

    getch();
    return 0;
}    