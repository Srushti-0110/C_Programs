#include <stdio.h>
#include<conio.h>
int main()
 {
    float side=0.0,area=0.0;
    
    printf("Enter a side: ");
    
    scanf("%f", &side);
    
    area = side * side;
    
    printf("\n The area of square is: %f\n", area);

    getch();
    return 0;
}    