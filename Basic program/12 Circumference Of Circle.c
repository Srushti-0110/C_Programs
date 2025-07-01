#include <stdio.h>
#include<conio.h>
int main()
 {
    float radius=0.0, pi =3.14,circumf=0.0;
    
    printf("Enter a radius: ");
    
    scanf("%f", &radius);
    
    circumf = 2 * pi * radius ;
    
    printf("\n The Circumference of circle is: %f\n", circumf);

    getch();
    return 0;
}    