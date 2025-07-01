#include <stdio.h>
#include<conio.h>
int main()
 {
    float width=0.0, height=0.0 ,area=0.0;
    
    printf("\n Enter a width- ");
    
    scanf("%f", &width);
    
    printf("\n Enter a height- ");
    
    scanf("%f", &height);
    
    area = width * height ;
    
    printf("\n The area of rectangle is:%f\n", area);

    getch();
    return 0;
}    