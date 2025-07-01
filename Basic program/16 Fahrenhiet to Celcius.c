#include <stdio.h>
#include<conio.h>
int main()
 {
    float Fahrenhiet=0.0, Celcius =0.0;
    
    printf("\n Enter a Fahrenheit value- ");
   
    scanf("%f" , &Fahrenhiet);
    
    Celcius = (Fahrenhiet - 32) * ((5.0/9.0));
    
    printf("\n Value of Celcius :- %f\n",Celcius);

    getch();
    return 0;
}    