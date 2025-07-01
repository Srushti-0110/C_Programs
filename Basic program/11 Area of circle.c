#include <stdio.h>
#include<conio.h>
int main()
 {
    float radius=0.0, pi =3.14,area=0.0;
    
    printf("Enter a radius: ");
    
    scanf("%f", &radius);
    
    area = pi * radius * radius;
    
    printf("\n The area of circle is: %f\n",area);

    getch();
    return 0;
}    