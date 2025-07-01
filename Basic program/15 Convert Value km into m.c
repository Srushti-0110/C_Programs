#include <stdio.h>
#include<conio.h>
int main()
 {
    float kilometer=0.0, convert_value=0;
    
    printf("\n Enter a Kilometre value- ");
    
    scanf("%f", &kilometer);
    
    convert_value = kilometer * 1000;
    
    printf("\n Value of Kilometres in meter %f\n",convert_value);

    getch();
    return 0;
}    