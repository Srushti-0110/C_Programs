#include <stdio.h>
#include<conio.h>
int main()
 {
    float No=0.0, SquareRoot=0.0;
    
    printf("\n Enter a Number- ");
   
    scanf("%f" , &No);
    
    SquareRoot= sqrt(No);
    
    printf("\n Give Cube is :- %f\n", SquareRoot);

    getch();
    return 0;
}    